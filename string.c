#include<stdio.h>
main()
{
  int i,c=0,m=0,n=0,p=0;
  char a[100];
  printf("Enter a string of length 5 with 2 Lowercase letters, 2 Upparcase letters, 1 number and 1 Symbol letter: \n\n");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {if(islower(a[i]))
  c++;
  else if(isupper(a[i]))
  m++;
  else if(isdigit(a[i]))
  n++;
  else
  p++;
  }
  if(c==2 && m==2 && n==1 && p==1)
    printf("Valid");
    else
    printf("Invalid");
}
