#include<stdio.h>
int countDigits(int num)
{
int count=1;
if(num<=9) return count;
return count=count+countDigits(num/10);
}
int main()
{
int num;
int count;
printf("Enter a number : ");
scanf("%d",&num);
count=countDigits(num);
printf("Digit Count : %d\n",count);
return 0;
}