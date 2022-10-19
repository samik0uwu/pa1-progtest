#include <stdio.h>
#include <math.h>

float calculateInterest(int day, float balance, float credit, float debit){
    float interest=0;

    while (day!=0){
    if(balance<0){
        interest=(floor((balance+interest)*(debit)))/100;
    }
    else{
        interest=(floor((balance+interest)*(credit)))/100;
    }

    day--;
    //printf("interest %f\n", interest);
    }
    return interest;

}

int main (void) {

    float debit, credit;


    printf("Zadejte kreditni urok [%%]:\n");

        if(scanf("%f", &credit)!=1||credit<=0){
        printf("Nespravny vstup.\n");
        
    }else{
        printf("Zadejte debetni urok [%%]:\n");

        if(scanf("%f", &debit)!=1||debit<=0){
        printf("Nespravny vstup.\n");

        }
        else{
            int day, lastDay =-1;
            float amount=-1;
            float balance=0;
            printf("Zadejte transakce:\n");

            while (amount!=0)
            {

                if(scanf("%d, %f", &day, &amount)!=2 ||lastDay>=day){
                    printf("Nespravny vstup.\n");
                    break;
                }
                else{
                    //zurocit do posledniho dne
                    int days=day-(lastDay+1);
                    balance+=calculateInterest(days, balance, credit, debit);
                    //pricist hodnotu
                    if(amount==0){
                        printf("Zustatek: %.2f", balance);
                        break;
                    }
                    balance+=amount;
                    lastDay=day;
                }
            }
            
        }
    }


}