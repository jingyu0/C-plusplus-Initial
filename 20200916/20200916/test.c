//#include<stdio.h>
//void fun(int a[], int b[], int c[], int n)
//{
//	int k=0;
//	for (k = 0; k < n; k++){
//		c[k] = a[k] + b[n - 1 - k];
//	}
//}
//
//NONO()
//{/*don'tmodifyhere。*/
//	FILE *rf, *wf;
//	int a[100], b[100], c[100], i, j;
//	rf = fopen_s("in1.dat", "r");
//	wf = fopen_s("out1.dat", "w");
//	for (i = 0; i<5; i++){
//		for (j = 0; j<5; j++) fscanf(rf, "%d,", &a[j]);
//		for (j = 0; j<5; j++) fscanf(rf, "%d,", &b[j]);
//		fun(a, b, c, 5);
//		for (j = 0; j<5; j++) fprintf(wf, "%d,", c[j]);
//		if (i<4) fprintf(wf, "||");
//	}
//	fclose(rf);
//	fclose(wf);
//	
//}
//int main()
//{
//	int i, a[100] = { 1, 3, 5, 7, 8 }, b[100] = { 2, 3, 4, 5, 8 }, c[100];
//	void NoNO();
//	fun(a, b, c, 5);
//	printf("The result is:");
//	for (i = 0; i<5; i++) printf("%d ", c[i]);
//	printf("\n");
//	NONO();
//	return 0;
//}

//int i; 
//int sum = 0; 
//if (n>1000 || n<0) {
//	puts("输入的数字超出范围！"); 
//} 
//else { for(i=2;i<n;i++) 
//{ 
//	if(0 == n%i) 
//	{ 
//		sum+=i; 
//	} 
//} 
//return sum; 