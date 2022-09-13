#include<stdio.h>
#include<math.h>
int prime(int n)
{

int a[n+1],i,j;
for(i=1;i<=n;i++)
a[i]=1;
for(i=2;i<=sqrt(n);i++)
{if(a[i]==1)
{
    for(j=2;i*j<=n;j++)
    {
        a[i*j]=0;
    }
}
}
for(i=2;i<=n;i++)
{
 if(a[i]==1)
{printf("%d  ",i);}
}
}
int main()
{
int num;
printf("Enter the range: ");
scanf("%d",&num);
printf("Prim numbers are: ");
prime(num);
}
