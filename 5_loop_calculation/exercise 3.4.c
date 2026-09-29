#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,power;
    i=1;
    power=0;
    printf("Enter the integer x:");
    scanf("%d",&x);
    printf("Enter the integer y:");
    scanf("%d",&y);
    while(i<=y){
            power*=x;
        i++;


    }
 printf("power is %d\n",power);
    return 0;
}
