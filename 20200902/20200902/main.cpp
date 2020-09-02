//删除链表第k个节点
//1、先找到第k个节点的位置（从头节点开始走k-1步）
//2、删除，先链接再删除
#define _CRT_SECURE_NO_WRANINGS
#include<iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;

struct list_node{
	int val;
	struct list_node * next;
}; //链表的节点

int K;

list_node * input_list(void) //读入链表
{
	int n, val;
	list_node * phead = new list_node();
	list_node * cur_pnode = phead;
	scanf_s("%d %d", &n, &K);
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &val);
		if (i == 1) {
			cur_pnode->val = val;
			cur_pnode->next = NULL;
		}
		else {
			list_node * new_pnode = new list_node();
			new_pnode->val = val;
			new_pnode->next = NULL;
			cur_pnode->next = new_pnode;
			cur_pnode = new_pnode;
		}
	}
	return phead;
}

list_node * remove_kth_node(list_node * head, int K)
{
	//////在下面完成代码
	if (head == NULL)
		//链表为空，直接返回
		return NULL;
	list_node* fast = head;
	if (K == 1)
		//删除第一个节点，头删
	{
		head = head->next;
		return head;
	}
	while (--K){
		if (fast == NULL || fast->next == NULL)
			return NULL;
		fast = fast->next;
	}
	if (fast->next)//找到第k个节点，构思尾删
	{
		fast->val = fast->next->val;
		//把第k个节点和第k-1个节点的值交换
		list_node*del = fast->next;
		//标记fast->next;
		fast->next = fast->next->next;
		//链接
		free(del);
	}
	else{
		//尾删
		free(fast);
	}
	return head;
}

void print_list(list_node * head)
{
	while (head != NULL) {
		printf_s("%d ", head->val);
		head = head->next;
	}
}

int main()
{
	list_node * head = input_list(); // 链表的头节点
	list_node * rhead = remove_kth_node(head, K);
	print_list(rhead);
	system("pause");
	return 0;
}