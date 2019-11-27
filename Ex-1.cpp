//ÅÀÂ¥ÌİËã·½Ê½Êı 
#include<iostream>
using namespace std;
int step(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 2;
	}
	else
	{
		return step(n-1)+step(n-2);
	}
}
int main()
{
	int n;
	cin>>n;
	int count=step(n);
	cout<<count<<endl;
	return 0;
} 
