#include<stdio.h>
#include<string.h>
main()
{
char a[100],b[100];
int s=0,d=0,i;  //only s for function
printf("Enter two string: \n");
gets(a);
gets(b);
/*
s=strcmp(a,b);
printf("%d",s); for function */
for(i=0;a[i]!='\0' || b[i]!='\0';i++)
{
    d++;

    if(a[i]==b[i])
        s++;
}
if(s==d)
    printf("%d",0);
else
    printf("%d",1);

 }

