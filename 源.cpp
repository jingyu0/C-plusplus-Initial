//# include<iostream>
//# include<set>
//# include<vector>
//using namespace std;
//
////µÚ1Ìâ
//int myreverse(int number)
//{
//	int ret=0;
//	while(number)
//	{
//		ret =ret*10+number%10;
//		number/=10;
//	}
//	return ret;
//}
//int fun1(int n)
//{
//	int count=0;
//	for(int i=1;i<=n;i++)
//	{
//		if(myreverse(i)==i*4)
//		{
//			count++;
//		}
//	}
//	if(count)
//	{
//		return count;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void fun2(int n)
//{
//	for(int i=1;i<=n;i++)
//	{
//		if(myreverse(i)==i*4)
//		{
//			cout<<i<<" "<<myreverse(i)<<endl;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	cout<<fun1(n)<<endl;
//	fun2(n);
//	system("pause");
//	return 0;
//}
