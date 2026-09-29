#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,num;
    count=1;
   int larg=0;
    while(count<=10){
        printf("enter the number %d:",count);
        scanf("%d",num);
    if(num>larg){
       larg=num;
    }
    count++;//this prevents infinite loop .....always remember
   }
    printf("the largest number is %d",larg);

    return 0;
}
