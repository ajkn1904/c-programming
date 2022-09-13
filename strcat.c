#include<stdio.h>
#include<string.h>
main()
{
char a[100],b[100],d[100];
int s=0,i;
printf("Enter two string: \n");
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
d[i]=a[i];
s++;
}
int m=0;
for(i=s;b[i-s]!='\0';i++)
{
d[s+m]=b[i-s];
m++;
}
d[s+m]='\0';
    puts(d);

 }

