#include <stdio.h>

#define TAILLE 10

void afficheTab(int tab[], int taille){
	int i;
	for(i=0;i<taille;i++)
		printf("%d ",tab[i]);
	printf("\n");
}

void changeTab(int tab[],int indice){
	tab[indice]+=2;
}

int main(int argc, char const *argv[]){
	int tab[TAILLE]={1,2,3,4,5};
	afficheTab(tab,5);
	changeTab(tab,4);
	afficheTab(tab,5);
	printf("%p et %p\n",tab,&tab);
	return 0;
}