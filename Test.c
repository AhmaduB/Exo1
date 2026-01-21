#include <stdio.h>
int main()
{
    int i, n, m, moy, cpt = 0, som = 0;
    do
    {
        printf("Entrer le nombre d'entier : \n");
        scanf("%d", &n);
    } while (n < 0);
    for (i = 0; i < n; i++)
    {
        do
        {
            puts("Entrer un entier");
            scanf("%d", &m);
        } while (m < 0);
        if (m % 2 == 0)
        {
            cpt++;
            som += i;
        }
    }
    moy = som/cpt;
    printf("La moyenne est %d\n", moy);
   
    return 0;
}