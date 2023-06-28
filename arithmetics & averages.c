#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    float avg1, avg2,avg3,avg4;
    printf ("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("Sum is=%d\n",sum);
    avg1=sum/2;
    printf ("Avg is=%.4f\n",avg1);

    sub=a-b;
    printf("Sub is=%d\n",sub);
    avg2=sub/2;
    printf ("Avg is=%.3f\n",avg2);

    mul=a*b;
    printf("Mul is=%d\n",mul);
    avg3=mul/2;
    printf ("Avg is=%.2f\n",avg3);

    div=a/b;
    printf("Div is=%d\n",div);
    avg4=div/2;
    printf ("Avg is=%.1f\n",avg4);

    getch();
}
