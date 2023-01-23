#include <stdio.h>

int main(){
	int i,j;
	printf("Entrez la première valeur : ");
	scanf("%d",&i);
	printf("Entrez la seconde valeur : ");
	scanf("%d",&j);
	printf("les valeurs sont : %d et %d\n", i, j );
	printf("la somme des valeurs est : %d\n", i+j);
	if (i%2==0)
		printf("%d divisible par 2\n",i);
	if (i%3==0)
		printf("%d divisible par 3\n",i);
	if (j%2==0)
		printf("%d divisible par 2\n",j);
	if (j%3==0)
		printf("%d divisible par 3\n",j);
	return 0;
}