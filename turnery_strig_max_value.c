#include<stdio.h>
main()
{
int m,m1,p,m2;
printf("Enter 3 number: \n");
scanf("%d %d %d",&m,&m1,&m2);
p=(m1>m) ? m1:m;
p=(m2>p) ? m2:p;
printf("The maximum is: %d",p);
}
