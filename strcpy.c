#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
/* without dynamic memory allocation
char a[100],b[100];
int s=0,i;
gets(a);

for(i=0;a[i]!='\0';i++)
{
(b[i]=a[i]);
        s++;
}
b[s]!='\0';
puts(b);*/
char *ptr,*ptr1;
int i,s;//=0;
printf("Enter a string: \n");
scanf("%d",&s);
ptr=(char*)malloc(s*sizeof(char));
ptr1=(char*)malloc(s*sizeof(char));
gets(ptr);
for(i=0;ptr[i]!='\0';i++)
{
    ptr1[i]=ptr[i];
   // s++;
}
ptr1[s]!='\0';
puts(ptr1);
free(ptr);
free(ptr1);
}
