//计算上台阶的方法
/*#include<iostream>
using namespace std;
int count(int n)
{
if(n==1)
return 1;
else if(n==2)
return 2;
else
return count(n-1)+count(n-2);
}
int main()
{
int n;
cin>>n;
cout<<count(n)<<endl;
return 0;
} */

//找出数组中和为目标值的两个数
/* #include<iostream>
using namespace std;
int main()
{
int n=4,i;
int target;
int nums[n];
for(i=0;i<n;i++)
{
cin>>nums[i];
}
cin>>target;
for(i=0;i<n-1;i++)
{
for(int j=1;j<n;j++)
{
if(nums[i]+nums[j]==target)
cout<<'['<<i<<','<<j<<']'<<endl;
}
}
return 0;
} */

//求出n个正整数中的第k个最小正整数
/* #include<iostream>
using namespace std;
int main()
{
int n,k,i;
int num[10000];
int fin[1000];
int count=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>num[i];
fin[num[i]]++;
}
for(i=0;i<1000;i++)
{
if(fin[i]!=0)
{
count++;
}
if(count==k)
{
break;
}
}
if(count==k)
{
cout<<i<<endl;
}
else
cout<<"NO RESULT"<<endl;
return 0;
} */

//十进制转R进制
/*#include<iostream>
using namespace std;
void change(int n,int R)
{
int m,num;
if(n!=0)
{
m=n/R;
num=n%R;
change(m,R);
cout<<num;
}
}
int main()
{
int n,R;
cin>>n;
cin>>R;
change(n,R);
return 0;
} */

////罗马数字转换器
//#include<iostream>
//#include<string>
//using namespace std;
//int StrToInt(char str)
//{
//	switch (str){
//	case 'I':return 1;
//	case 'V':return 5;
//	case 'X':return 10;
//	case 'L':return 50;
//	case 'C':return 100;
//	case 'D':return 500;
//	case 'M':return 1000;
//	default: return 0;
//	}
//}
//int RomanToInt(string str)
//{
//	if (str.size() <= 1)
//		return StrToInt(str[0]);
//	int ret = StrToInt(str[0]);
//	for (int i = 1; i<str.size(); i++)
//	{
//		if (StrToInt(str[i])>StrToInt(str[i - 1]))
//			ret += StrToInt(str[i]) - 2 * StrToInt(str[i - 1]);
//		else
//			ret += StrToInt(str[i]);
//	}
//	return ret;
//}
//int main()
//{
//	string str;
//	cin >> str;
//	cout << RomanToInt(str) << endl;
//	return 0;
//}

