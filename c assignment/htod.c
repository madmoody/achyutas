#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
char num[100];
printf("Enter the number");
scanf("%s",num);

int val,temp=0,n;
n = strlen(num);
for(int i = 0;i<n;i++)
{
 if(num[i]>='0' && num[i]<= '9')
 {
 val = 	num[i] - 48;
 }
 if(num[i]>= 'A' && num[i] <= 'F')
 {
 val = num[i]-65+10;
 }
 if(num[i]>='a' && num[i] <= 'f')
 {
 val = num[i] - 97+10;
 }
temp = temp + val*pow(16,i);
}
printf("%d",temp);
}
