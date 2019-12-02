//C++ 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str; 
	for(int i=0;i<str.size();i++)
	{
		//小写变大写 
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-'a'+'A';
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]-'A'+'a';
		}
	}
	cout<<str<<endl;
	return 0;
 } 


//Java 
//大小写的转化
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //实现一个字符串中大小写的转化
       Scanner sc = new Scanner(System.in);
       System.out.println("请输入一个字符串:");
       String line = sc.nextLine();
       //把字符串转化为字符数组
        char[] chs=line.toCharArray();
        for(int i = 0; i<chs.length ; i++){
            char ch=chs[i];
            if(Character.isUpperCase(ch)){
                //public static char toLowerCase(char ch):把给定的字符转化为小写字符
                System.out.print(Character.toLowerCase(ch));
            }
            else if(Character.isLowerCase(ch)){
                //public static char toUpperCase(char ch):把给定的字符转化为大写字符
                System.out.print(Character.toUpperCase(ch));
            }
        }
    }
}


//Java 
public class Main {
    public static void main(String[] args) {
        //将数字-1234567转化为二进制，八进制与十六进制
        System.out.println("-1234567的二进制为："+Integer.toBinaryString(-1234567));
        System.out.println("-1234567的八进制为："+Integer.toOctalString(-1234567));
        System.out.println("-1234567的十六进制为："+Integer.toHexString(-1234567));
    }
}


