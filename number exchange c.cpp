#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number a: ");
	scanf("%d",&a);
	printf("enter second number b: ");
	scanf("%d",&b);
	printf("\nBefore swapping\a=%d and b=%d",a,b);
	a=a-b;
	b=a+b;
    a=b-a;
	printf("\n\nAfter swapping\n a=%d and b=%d",a,b);
}
