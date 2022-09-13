#include<stdio.h>
#include<string.h>
main()
{
char a[100],b[100];
int s,i;
printf("Enter a string\n");
gets(a);
s=strlen(a);
for(i=0;a[i]!='\0';i++)
{
b[s-1-i]=a[i];
}
b[s]='\0';
    puts(b);

 }

