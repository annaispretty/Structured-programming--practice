#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    int sum=0;
    while(x<=10){
        sum+=x;
        printf("sum:%d\n",sum);
     ++x;
    }
    return 0;
}
