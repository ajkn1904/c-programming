#include<stdio.h>
#include<string.h>
void flush_stdin(void)
{
int ch;
do
ch=getchar();
while(ch!=EOF && ch!='\n');
}
main()
{
char *a,*b,*d;
int s,m,i;
scanf("%d %d",&s,&m);
flush_stdin();
a=(char*)calloc(s,sizeof(char));
gets(a);
b=(char*)calloc(m,sizeof(char));
gets(b);
d=(char*)calloc(s+m,sizeof(char));

for(i=0;i<s;i++)
{
d[i]=a[i];
}
for(i=s;i<s+m;i++)
{
d[i]=b[i-s];
}
d[s+m]='\0';
    puts(d);

 }

