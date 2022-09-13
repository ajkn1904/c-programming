#include<stdio.h>
#include<string.h>
main()
{
char a[100];
int s;
printf("Enter a string");
scanf("%s",a);
//gets(a); we can use gets instead of scanf
s=strlen(a);
printf("%d",s);
//puts(s); we can use puts here instead of printf
 }
