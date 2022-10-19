#include<stdio.h>
#include <stdlib.h>

char changeTile(char ex){

    if (ex==' ')
    {
        ex='X';
    }
    else{
        ex=' ';
    }
    return ex;
}

void writeBorder(int x, int y){
    printf("+");
    for (int m = 0; m < x*y; m++)
    {
        printf("-");
    }
    printf("+\n");

}

int main (void){

    int count, size;
    char tile = 'X';

    printf("Zadejte pocet poli:\n");
    
    if(scanf("%d", &count)!=1||count<=0){
        printf("Nespravny vstup.\n");
    }
    else{
    printf("Zadejte velikost pole:\n");
    
    if(scanf("%d", &size)!=1||size<=0){
        printf("Nespravny vstup.\n");
    }
    else{
    writeBorder(count, size);
    for (int i = 0; i < count; i++)
    {
        for (int l = 0; l < size; l++)
        {
            printf("|");        
            for (int j = 0; j < count; j++)
            {
                tile=changeTile(tile);
                for (int k = 0; k < size; k++)
                {
                    printf("%c",tile);
                }
            }
            if(count%2==1){
            tile=changeTile(tile);}
            printf("|\n");
        }

        tile=changeTile(tile);
    
    }
          
    writeBorder(count, size);

    }}}