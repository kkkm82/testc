#include <stdio.h>
main() {
   int i;
   float sum;
   sum=0;
   for(i=2;i<=10;i=i+1) // for문에는 정수형으로 놓는 게 좋다.
   sum=sum+(i+3.0)/(i*(i+1.0));
   printf("sum=%f",sum);
}


