#include<stdio.h>
#include<math.h>

void Prime_Check(int n) //sqrt method
{int prime[n],i,j;
    for(i=1;i<=n;i++)
    {
        prime[i]=1;
    }
    for(j=2;j<=sqrt(n);j++)
    {

        if(prime[j]==1)
    {

    for(i=j*j;i<=n;i=i+j)
        prime[i]=0;
        }
    }
    printf("Prime Numbers in %d are: ",n);
        for(i=2;i<=n;i++)
        {
            if(prime[i])
                printf("%d  ",i);
        }
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    Prime_Check(n);

}
