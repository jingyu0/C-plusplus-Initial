//链表节点的删除
#include<iostream>
#include<vector>
using namespace std;
typedef struct node
{
	int number;
	struct node *next;
}Node;
//删除节点
Node* Delete(Node* head, int key){
	Node *node1 = head;
	Node *node2 = NULL;
	if (head == NULL){
		return NULL;
	}
	else{
		if (node1->number == key){
			head = head->next;
			free(node1);
			return head;
		}
		else
		{
			while (node1 != NULL){
				node2 = node1;
				node2 = node2->next;
				if (node2->number == key){
					node1->next = node2->next;
					free(node2);
					break;
				}
				node1 = node1->next;
			}
			return head;
		}
	}
}
int main(){
	int n, k;
	vector<int> v(100);
	while (cin >> n >> k){
		Node *head = (Node*)malloc(sizeof(Node));
		Node *p, *q, *q1;
		int key;
		p = (Node*)malloc(sizeof(Node));
		q1 = q = head;
		int i;
		for (int i = 1; i <= n; i++){
			cin >> v[i];
			p->number = v[i];
			head->next = p;
			head = p;
			p = (Node*)malloc(sizeof(Node));
		}
		head->next = NULL;
		q1 = q1->next;
		key = k;
		p = Delete(q->next, key);
		while (p != NULL){
			cout << p->number << " ";
			p = p->next;
		}
		cout << endl;
		free(p);
		free(head);
	}
	return 0;
}
////
//////#include<iostream>
//////using namespace std;
//////int fun2(int k){
//////	int value = 0;
//////	while (k != 0){
//////		value += k % 10;
//////		k = k / 10;
//////	}
//////	return value;
//////}
//////int fun1(int m){
//////	int val = 0;
//////	for (int i = 1; i <= m / 2; ++i){
//////		int k = i;
//////		int h = m - k;
//////		int s = fun2(k) + fun2(h);
//////		if (s>val){
//////			val = s;
//////		}
//////	}
//////	return val;
//////}
//////int main(){
//////	int n;
//////	cin >> n;
//////	while (n != 0){
//////		int m;
//////		cin >> m;
//////		int num = fun1(m);
//////		cout << num;
//////		cout << endl;
//////		--n;
//////	}
//////	return 0;
//////}

//#include<iostream>
//#include<vector>
//using namespace std;
//int sbz(vector<int> v1,int n){
//	for (int i = 0; i<n; i++){
//		return i;
//	}
//}
//int main(){
//	int n;
//	vector<int> v(10);
//	cin >> n;
//	for (int i = 0; i < n; i++){
//		cin >> v[i];
//	}
//	cout << sbz(v,n);
//	return 0;
//}