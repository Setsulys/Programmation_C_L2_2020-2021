#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 20
#define MAX 50

void initAlea(int tab[],int taille,int max)
{
    int i;

    for (i = 0; i < taille; i++)
        tab[i] = rand() % max;
}

int main(void)
{
    srand(time(NULL));
    int tab[TAILLE];
    int i;
    initAlea(tab, TAILLE, MAX);

    for (i = 0; i < 20; i++)
        printf("%d\n", tab[i]);

    return 0;
}