#include <stdio.h>

int main (void){

    int rozmer, x1, y1, z1, x2, y2, z2;


    printf("Rozmer mistnosti:\n");
    if (scanf("%d", rozmer)!=1||rozmer<=0)
    {
        printf("Nespravny vstup.\n");

    }
    else{
        printf("Bod #1:\n");
        if (scanf("%d %d %d",x1, y1, z1)!=3)
        {
            printf("Nespravny vstup.\n");
        }
        else{
            printf("Bod #2:\n");
            if (scanf("%d %d %d",x2, y2, z2)!=3)
            {
                printf("Nespravny vstup.\n");
            }
            else{
                
            }
        }
    }
    


}