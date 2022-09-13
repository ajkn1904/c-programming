#include<stdio.h>
#include<string.h>
main()
{
char a[100];
int s=0,i;
//scanf("%s",a);
printf("Enter a string\n");
gets(a); //we can use gets instead of scanf
for(i=0;a[i]!='\0';i++)
    s++;
printf("%d",s);
//puts(s); we can use puts here instead of printf
 }
