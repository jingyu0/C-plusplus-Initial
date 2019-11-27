//求出N个整数中第k个最小的整数
#include<iostream>
using namespace std;
int main()
{
	int n,k,i;
	int count=0;
	int num[10000];
	int b[1000]={0}; 
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
		b[num[i]]++;
	}
	//排序 
	for(i=0;i<1000;i++)
	{
		if(b[i]!=0)
			count++;
		if(count==k)
			break;
	}
		if(count==k)
			cout<<i<<endl;
		else
			cout<<"NO RESULT"<<endl;
	return 0;
} 
