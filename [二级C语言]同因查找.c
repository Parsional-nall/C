#include<stdio.h>
//求出10至1000之内能同时被2、3、7整除的数，并输出。每行一个。
int main()
{
	int i;
	for(i=10;i<1000;i++)
	{
		if(i%2==0&&i%3==0&&i%7==0) printf("%d\n",i);
	 } 
	 return 0;
 } 
