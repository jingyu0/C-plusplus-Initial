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
		//Сд���д 
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
//��Сд��ת��
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //ʵ��һ���ַ����д�Сд��ת��
       Scanner sc = new Scanner(System.in);
       System.out.println("������һ���ַ���:");
       String line = sc.nextLine();
       //���ַ���ת��Ϊ�ַ�����
        char[] chs=line.toCharArray();
        for(int i = 0; i<chs.length ; i++){
            char ch=chs[i];
            if(Character.isUpperCase(ch)){
                //public static char toLowerCase(char ch):�Ѹ������ַ�ת��ΪСд�ַ�
                System.out.print(Character.toLowerCase(ch));
            }
            else if(Character.isLowerCase(ch)){
                //public static char toUpperCase(char ch):�Ѹ������ַ�ת��Ϊ��д�ַ�
                System.out.print(Character.toUpperCase(ch));
            }
        }
    }
}


//Java 
public class Main {
    public static void main(String[] args) {
        //������-1234567ת��Ϊ�����ƣ��˽�����ʮ������
        System.out.println("-1234567�Ķ�����Ϊ��"+Integer.toBinaryString(-1234567));
        System.out.println("-1234567�İ˽���Ϊ��"+Integer.toOctalString(-1234567));
        System.out.println("-1234567��ʮ������Ϊ��"+Integer.toHexString(-1234567));
    }
}


