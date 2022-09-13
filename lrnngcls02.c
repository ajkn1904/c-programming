#include<stdio.h>
int main()
{
 // int start=1, end=5, dif=1;
  //loop
 /* while(start<=end){
    printf("\n%d", start);
    start= start+dif;
  }  //dif++;*/

  /*for(int i=10; i>=1;i--)
  {

      printf("\n%d",i);
  }
  int i=3;
  do{
    printf("Hello!\n");
    i++;
  }while(i<5);


  for(int i=1; i<=10;i++)
  {

      if(i%2==0){
        printf("Even%d\n",i);
      }
  }
  */
  int count=0,n;
  printf("enter a number ");
  scanf("%d",&n);
   for(int i=1; i<=n; i++)
  {

      if(i%2==0){
       count++;
 //printf("\AAA\n");
 //break;//break pele loop ekbar tar requirement fulfill korei rs kaj na kore beriye jay.
      }
      // printf("\n\n%d\n",count);
  }
  printf("%d\n",count);
return 0;
}
