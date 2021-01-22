#include<stdio.h>
int sum(int);
int main()
{
	int n,result;
	printf("enter a number :\n");
	scanf("%d",&n);
	result=sum(n);
	printf("the sum of digits:%d",result);
	return 0;
}
int sum(int a)
{
	
	if(a==0)
	return 0;
	
	return ((a%10)+sum(a/10));

}
