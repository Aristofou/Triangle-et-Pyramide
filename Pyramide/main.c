#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nPCompteur,nDCompteur,test=1,nLignes;

    printf("Combien de ligne fait votre pyramide ?\n");
    scanf("%d",&nLignes);
    nLignes*=2;

    for(nPCompteur=0;nPCompteur<nLignes;nPCompteur+=2)
    {
                //Le premier for sert à gerer le nombre de lignes, on fait une pyramide normale et on prend que les résultats impaires
        while(test < ((nLignes-nPCompteur)/2) )
        {
            printf(" ");
            test+= 1;
        }
        for(nDCompteur=0;nDCompteur<=nPCompteur;nDCompteur++) // Le deuxieme for sert pour placer les étoiles
        {
            printf("*");
        }
        test=1;
        printf("\n");
    }

    return 0;
}
