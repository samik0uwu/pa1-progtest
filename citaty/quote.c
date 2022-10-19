#include <stdio.h>

int main (void){

    char quotes[9][100]={
        "noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.",
        "bortaS bIr jablu'DI' reH QaQqu' nay'.",
        "Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.",
        "bISeH'eghlaH'be'chugh latlh Dara'laH'be'.",
        "qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.",
        "Suvlu'taHvIS yapbe' HoS neH.",
        "Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.",
        "Heghlu'meH QaQ jajvam.",
        "leghlaHchu'be'chugh mIn lo'laHbe' taj jej."
    };

    
    int number;
    printf("ml' nob:\n");
    if (scanf("%d", &number)!=1 || number<1 ||number>9)
    {
        printf("luj\n");
    }
    else{
        printf("Qapla'\n");
        printf("%s\n",quotes[number-1]);

    }

}