#include<stdio.h>
int main()
{
int num;
printf("enter the decimal number : ");

scanf(" %d",&num);
printf("The binary value is : ");
for(int i = 0;i<8;i++)
 { 
     printf(" %d",(num>>7-i)&0x01);


 }
printf("\n");
}
