#include<stdio.h>

int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);

for(int i = 0;i<10;i++)
{
 
	printf("%d\n",(num<<i));
}
}

