#include<stdio.h>

main ()

{
   static int i = 1;

   if(i--) {

   printf("%d ",i);

   main();

  }

}
