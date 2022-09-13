#include<stdio.h>
#include<algorithm>
using namespace std;

void bubble_sort(int p)
{
  int a[100],i,j;
  printf("Enter %d Values:  \n",p);
  for(i=1;i<p;i++)
  scanf("%d",&a[i]);


  for(i=1;i<p;i++)

      for(j=1;j<p-i;j++)
      {
          if(a[j]<a[j+1])
          swap(a[j],a[j+1]);
      }
     printf("Store in Descending Manner:  ");
     for(i=1;i<p;i++)
        printf("%d  ",a[i]);
        printf("Show the 3rd Digit")
}
main()
{
    int p;
    printf("Enter the Number of Values:  \n");
    scanf("%d",&p);
    bubble_sort (p);
}
