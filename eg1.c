#include<stdio.h>
#include<string.h>
void reverse_string(char *str)
{
char *m;
char g;
m=str;
while(*m!='\0')
{
m++;
}
m--;
while(str<m)
{
g=*str;
*str=*m;
*m=g;
m--;
str++;
}
}
int main()
{
char a[22];
printf("Enter a string : ");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
reverse_string(a);
printf("%s\n",a);
return 0;
}