#include<stdio.h>
void bubble_sort(int array[], int p)
{
  int i,j,swap;

  for(i=0;i<p-1;i++)
  {
      for(j=0;j<p-i-1;j++)
      {
          if(array[j]<array[j+1])
          {
              swap          =   array[j];
              array[j]      =   array[j+1];
              array[j+1]    =   swap;
          }
      }
  }
}
int main()
{
    int array[100],p,i,j,swap,sum;
    printf("Enter the Number of Values:  \n");
    scanf("%d",&p);
    printf("Enter %d Values:  \n",p);
   for(i=0;i<p;i++)
    scanf("%d",&array[i]);
    bubble_sort (array, p);
    printf("Store in Descending Manner:  ");
     for(i=0;i<p;i++)
   printf("%d  ",array[i]);
   printf("\n\n");
   printf("Show the 3rd Digit:%d\n",array[2]);
   printf("Show the Last Digit:%d\n",array[p-1]);
   sum=array[2]+array[p-1];
   printf("Sum:%d\n",sum);
    getch();
}
