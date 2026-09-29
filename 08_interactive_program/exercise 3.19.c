#include <stdio.h>
#include <stdlib.h>

int main()
{
    float loan_principal;
    float interest_rate;
    float term_of_loans;
    float interest_charge;
    int chances=0;
    while(chances<=19){
    printf("Enter the loan_principal(-1to end):");
    scanf("%f",&loan_principal);
    if(loan_principal==-1){
        break;
    }
    printf("Enter the interest_rate:");
    scanf("%f",&interest_rate);
    printf("Enter the term_of_loans:");
    scanf("%f",&term_of_loans);
    interest_charge=loan_principal*interest_rate*term_of_loans;
    printf("The interest charge is %f\n",interest_charge);
    chances++;
    }
    return 0;
}
