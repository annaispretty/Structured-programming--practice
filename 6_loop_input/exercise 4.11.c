#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sum,i;
  sum=0;
  for(i=1;i<=100; i++){
        if(i%7==0){
        sum+=i;
        }

  }
        printf("The sum of the multiple is%d",sum);
    return 0;
}
