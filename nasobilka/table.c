#include <stdio.h>

int main (void){

    int rozsah;
    printf("Rozsah:\n");
    if(scanf("%d", &rozsah)!=1 || rozsah <= 0){
        printf("Nespravny vstup.\n");
    }
    else{
        int width=1;
        int tmp=rozsah*rozsah;
        while (tmp>0)
        {
            tmp/=10;
            width++;
        }
        int firstWidth=1;
        tmp=rozsah;
        while(tmp>0){
            tmp/=10;
            firstWidth++;
        }

        //nakreslit prvni line
        //pred kazdou line cislo ty radky
        //konec se zvetsuje porad int bottom na konci kazdeho cyklu ++


        printf("%*c|", firstWidth,' ');
        for (int i = 0; i < rozsah; i++)
        {
            printf("%*d", width, (rozsah-i));
        }
        printf("\n");
        for (int i = 0; i < firstWidth; i++)
        {
            printf("-");
        }
        printf("+");

        for (int i = 0; i < width*rozsah; i++)
        {
            printf("-");
        }
        printf("\n");

        int bottom=0;
        for (int i = 1; i <= rozsah; i++)
        {
            printf("%*d|", firstWidth, i);
            for (int j = rozsah; j >bottom; j--)
            {
                printf("%*d", width,i*j);
            }
            printf("\n");
            bottom++;
            
        }
        

        

        
    }

}