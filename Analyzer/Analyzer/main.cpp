//����ʷ�������

//��Ϥ�ʷ�����������Ĺ��̺�ԭ��
//����������Եĵ��ʣ�����ʷ���������
//��������һ���������иôʷ������������������������棻Ҫ��ÿ����
//�ʷ����Ľ���Զ�Ԫ�����ʽ���أ��������ı��ļ��У����д������ܡ�
#pragma warning (disable : 4996)
#include"stdio.h"
#include"string.h"
#include <stdlib.h>
#include <iostream>
#include <fstream> 

using namespace std;
FILE *fp;
char prog[100], token[20];
char ch;
int s, p, m = 0, n, row, sum = 0;
char * rwtab[5] = { "dim", "do", "if", "stop", "end" };
void glance()
{
	for (n = 0; n<8; n++)
		token[n] = NULL;
	ch = prog[p++];
	while (ch == ' ')
	{
		ch = prog[p];
		p++;
	}

	//�ж����� 
	if ((ch >= '0'&&ch <= '9'))
	{
		{
			sum = 0;
			while ((ch >= '0'&&ch <= '9'))
			{
				sum = sum * 10 + ch - '0';
				ch = prog[p++];
			}
		}
		p--;
		s = 11;
		if (sum>32767)
			s = -1;
	}
	//�ж���ĸ 
	else if ((ch >= 'a'&& ch <= 'z') || (ch >= 'A'&& ch <= 'Z'))
	{
		m = 0;
		while ((ch >= '0'&&ch <= '9') || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
		{
			token[m++] = ch;
			ch = prog[p++];
		}
		token[m++] = '\0';
		p--;
		s = 10;
		for (n = 0; n<6; n++)
		{
			if (strcmp(token, rwtab[n]) == 0)
			{
				s = n + 1;
				break;
			}
		}
	}
	else switch (ch)
	{
	case'<':m = 0; token[m++] = ch;
		ch = prog[p++];
		if (ch == ')')
		{
			s = 21;
			token[m++] = ch;
		}
		else if (ch == '=')
		{
			s = 22;
			token[m++] = ch;
		}
		else
		{
			s = 23;
			p--;
		}break;
	case'>':m = 0;
		token[m++] = ch;
		ch = prog[p++];
		if (ch == '=')
		{
			s = 24;
			token[m++] = ch;
			token[m++] = ch;
		}
		else
		{
			s = 20;
			p--;
		}
		break;
	case':':m = 0; token[m++] = ch;
		ch = prog[p++];
		if (ch == '=')
		{
			s = 18;
			token[m++] = ch;
		}
		else
		{
			s = 17; p--;
		}
		break;
	case'*':s = 13; token[0] = ch; break;
	case'+':s = 15; token[0] = ch; break;
	case'-':s = 16; token[0] = ch; break;
	case'=':s = 25; token[0] = ch; break;
	case'**':s = 26; token[0] = ch; break;
	case'(':s = 27; token[0] = ch; break;
	case')':s = 28; token[0] = ch; break;
	case'#':s = 0; token[0] = ch; break;
	case'\n':s = -2; break;
	default:s = -1; break;
	}
}
int main()
{
	p = 0;
	row = 1;
	cout << "�������ַ������ַ�#���ַ������������־����" << endl;
	do
	{
		cin.get(ch);
		prog[p++] = ch;
	} while (ch != '#');
	//cout<<"�ַ���������Ϊ��"<<endl;
	if ((fp = fopen("C:data.txt", "w")) == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	fprintf(fp, "�ַ���������Ϊ��");
	p = 0;
	do
	{
		glance();
		switch (s)
		{
			//case 11:cout<<"("<<s<<","<<sum<<")"<<endl;break; 
		case 11:fprintf(fp, "(%d,%s)", s, sum);
			break;
			//case -1:cout<<"Error in row "<<row<<"!"<<endl;break; 
		case -1:fprintf(fp, "Error in row %d!", row);
			break;
		case -2:row = row++;
			break;
			//default:cout<<"("<<s<<","<<token<<")"<<endl;break;
		default:fprintf(fp, "(%d,%s)", s, token);
			break;
		}
	} while (s != 0);
	fclose(fp);
	return 0;
}