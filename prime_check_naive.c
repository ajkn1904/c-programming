#include<stdio.h>
#include<math.h>
int Prime_Check(int n); //naive method
int main()
{
int n,i,a;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Prime Numbers in %d are: ",n);
    for(i=2;i<=n;++i)
    {
        a=Prime_Check(i);
        if(a==1)
            printf("%d  ",i);
    }
    getch();
}
int Prime_Check(int n)
{

    int j,a=1;
    for(j=2;j<=n-1;++j)
    {
        if(n%j==0)
        {
            a=0;
            break;
        }
    }
    return a;
}
