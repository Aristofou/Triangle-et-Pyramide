#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nCompteur=1, nLigne=0, nSousCompteur=1;
    printf("Combien de lignes voulez vous faire ?\n");
    scanf("%d",& nLigne);
    for(nCompteur=1; nCompteur<=nLigne; nCompteur++){
            for(nSousCompteur=1; nSousCompteur<=nCompteur; nSousCompteur++){
                printf("*");
            }
        printf("\n");
        nSousCompteur=0;
    }

    return 0;
}
