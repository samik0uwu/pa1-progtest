#include <stdio.h>
int main (void) {

    printf("Zadejte barvu v RGB formatu:\n");
    int r;
    int g;
    int b;
    char z[3];
    scanf(" rgb %c %d , %d , %d %c",&z[0], &r, &g, &b, &z[1]);
    if((r>=0&&r<256)&&(g>=0&&g<256)&&(b>=0&&b<256)&&z[0]=='('&&z[1]==')'){
        printf("#%02X%02X%02X\n", r, g, b);

    }
    else{
        printf("Nespravny vstup.\n");
    }
    

}