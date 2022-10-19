#include <stdio.h>

int main (void){

    int rozsah;
    printf("Rozsah>\n");
    if(scanf("%d", &rozsah)!=1 || rozsah <= 0){
        printf("Nespravny vstup.\n");
    }
    else{
        int width;
        float tmp=rozsah*rozsah;
        while (tmp>0)
        {
            tmp/=10.0;
            width++;
        }
        printf("%d sirka %d", (rozsah*rozsah), width);
        
    }

}