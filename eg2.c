#include<stdio.h>
#include<string.h>
int is_Pallindrome(char *p)
{
char *m;
m=p;
while(*m!='\0')
{
m++;
}
m--;
while(p<m)
{
if(*p!=*m) return 1;
m--;
p++;
}
return 0;
}
int main()
{
char a[22];
int x;
printf("Enter a string : ");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
x=is_Pallindrome(a);
if(x==0) printf("%s is a pallindrome\n",a);
else printf("%s is not a pallindrome\n",a);

return 0;
}