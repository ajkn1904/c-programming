
#include<stdio.h>
int main()
{
   /* //prime check
   int n, count=1;
   printf("input n: ");
   scanf("%d",&n);
   for(int i=2;i<n-1;i++){
        if(n%i==0){
            count++;
            break;
        }
   }
    if(count==1)
        printf("prime");
    else
        printf("not prime");
*/
//function
void chk_prime(int a){
    int count=1;
for(int i=2;i<a-1;i++){
        if(a%i==0){
            count++;
            break;
        }
   }
    if(count==1)
        printf("%d is prime",a);

}
int main(){
 int n;
   printf("input n: ");
   scanf("%d",&n);
   for(int i=2;i<n-1;i++)
    {
        chk_prime(i);
    }

}


return 0;
}
