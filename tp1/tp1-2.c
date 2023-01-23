#include <stdio.h> 
int main(void) { /* données */ 
	int n, p;/*2 nombres entiers fournis par l’utilisateur */ /* resultat */ 
	float moyenne; /* moyenne des nombres n et p */ 
	printf("Ce programme calcule la moyenne de deux entiers\n"); 
	printf("Donnez le premier nombre : "); 
	scanf("%d",&n); /* saisie du premier nombre */ 
	printf("Donnez le deuxième nombre : "); 
	scanf("%d",&p); /* saisie du deuxième nombre */ 
	if(n>0 || p>0) { moyenne = (n + p) / 2.0; /*calcul de la moyenne */ 
		printf("La moyenne des deux nombres est : %5.2f\n",moyenne); 
	} 
	else { 
		printf("Les deux nombres doivent être positifs ou nuls\n"); 
	}
	return 0;
}