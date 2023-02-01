#include<stdio.h>
int main()
{
int a=2;
int num;
printf("please enter the maximumnum value");
scanf("%d", &num);
printf("even numbers in the list are");
while(a<=num)
{
	printf("%d,", a);
	a=a+2;
}}
