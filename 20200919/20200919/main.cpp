//#include <bits/stdc++.h>
//using namespace std;
//bool match(char* str, char* pattern){
//	if ('\0' == *pattern)
//	{
//		if ('\0' == *str)
//		{
//			return true;
//		}
//		else{
//			return false;
//		}
//	}
//	else
//	{
//		if (*(pattern + 1) != '*')
//		{
//			if (*str == *pattern)
//			{
//				return match(str + 1, pattern + 1);
//			}
//			else
//			{
//				if (*pattern == '.' && *str != '\0')
//				{
//					return match(str + 1, pattern + 1);
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//		else{
//			if ('\0' == *str)
//			{
//				return match(str,pattern + 2);
//			}
//			else
//			{
//				if (*str == *pattern || *pattern == '.')
//				{
//					return match(str + 1, pattern) || match(str, pattern + 2);
//				}
//				else
//				{
//					return match(str, pattern + 2);
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	char* s;//´ýÆ¥Åä×Ö·û´®
//	char* p;//×Ö·û¹æÂÉ×Ö·û´®
//	while (cin >> s){
//		if (cin.get() == '\n')
//			cin >> p;
//		match(s, p);
//	}
//	//cout<<"true"<<endl;
//	return 0;
//}

#include<iostream>
#include<iomanip>
using namespace std;

void MATRIX(int** arr, int row, int col){
	int count = 0;
	int x, y, min;
	(row > col) ? min = col : min = row;
	if (arr == NULL || row <= 0 || col <= 0)
		return;
	for (int round = 0; round < min / 2; ++round){
		x = round;
		for (y = round; y < col - round; y++){
			arr[x][y] = count++;
		}
		y = col - round - 1;
		for (x = round + 1; x < row - round - 1; x++){
			arr[x][y] = count++;
		}
		x = row - round - 1;
		for (y = col - round - 1; y >= round; y--){
			arr[x][y] = count++;
		}
		y = round;
		for (x = row - round - 1 - 1; x >round; x--){
			arr[x][y] = count++;
		}
	}
	if (row == col&&row % 2 == 1){
		arr[row / 2][col / 2] = count;
	}
	if (min == row&&col != row&&row % 2 == 1)
	{
		for (y = min / 2; y < col - min / 2; y++){
			arr[min / 2][y] = count++;
		}
	}
	if (min == col&&col != row&&row % 2 == 1)
	{
		for (x = min / 2; x < row - min / 2; x++){
			arr[x][min / 2] = count++;
		}
	}
	for (x = 0; x < row; x++){
		for (y = 0; y < col; y++)
		{
			cout << setw(3) << char(arr[x][y] % 26 + 'A');
			if (y == col - 1){
				cout << endl;
			}
		}
	}
}
int main()
{
	int **arr;
	int col, row, i;
	cin >> row >> col;
	cout << "A" << endl;
	arr = new int*[row];
	for (i = 0; i != row; ++i){
		arr[i] = new int[col];
	}
	MATRIX(arr, row, col);
	for (int i = 0; i != row; ++i){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
