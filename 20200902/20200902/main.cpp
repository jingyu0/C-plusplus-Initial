//ɾ�������k���ڵ�
//1�����ҵ���k���ڵ��λ�ã���ͷ�ڵ㿪ʼ��k-1����
//2��ɾ������������ɾ��
#define _CRT_SECURE_NO_WRANINGS
#include<iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;

struct list_node{
	int val;
	struct list_node * next;
}; //����Ľڵ�

int K;

list_node * input_list(void) //��������
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
	//////��������ɴ���
	if (head == NULL)
		//����Ϊ�գ�ֱ�ӷ���
		return NULL;
	list_node* fast = head;
	if (K == 1)
		//ɾ����һ���ڵ㣬ͷɾ
	{
		head = head->next;
		return head;
	}
	while (--K){
		if (fast == NULL || fast->next == NULL)
			return NULL;
		fast = fast->next;
	}
	if (fast->next)//�ҵ���k���ڵ㣬��˼βɾ
	{
		fast->val = fast->next->val;
		//�ѵ�k���ڵ�͵�k-1���ڵ��ֵ����
		list_node*del = fast->next;
		//���fast->next;
		fast->next = fast->next->next;
		//����
		free(del);
	}
	else{
		//βɾ
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
	list_node * head = input_list(); // �����ͷ�ڵ�
	list_node * rhead = remove_kth_node(head, K);
	print_list(rhead);
	system("pause");
	return 0;
}