#include <stdio.h>
#include <stdlib.h>
/*1*/
typedef struct {
	float * coef;
	int degre;
}Polynome;


/*2*/
void affichePolynome(Polynome p){
	int i;
	int sign=0;

	if (p.coef[0]!=0){
		printf("%.2f",p.coef[0]);
		sign=1;
	}
	if (p.coef[1]!=0){
		if (sign!=0)
			printf("+ %.2fx",p.coef[1]);
		else
			printf(" %.2fx",p.coef[1]);
		sign=1;
	}
	for(i=2;i<= p.degre ; i++){
		if (p.coef[i]!=0){
			if (sign!=0)
				printf("+ %.2fx^%d",p.coef[i],i);
			else
				printf(" %.2fx^%d",p.coef[i],i);
			sign=1;
		}
	}
	printf("\n\n");
}

/*3*/
int lirePolynome(Polynome*p){
	int degre;
	int coef;

	do{
		printf("Entrez le degre du polynome : ");
		scanf("%d",&((*p).degre));
	}while((*p).degre<0);

	(*p).coef=(float*)calloc((*p).degre+1,sizeof(float));
	if((*p).coef==NULL)
		return 0;

	printf("Entrez le coefficient du terme de degre %d : ",(*p).degre);
	scanf("%f",(*p).coef+(*p).degre);
	printf("Terminer avec un degre negatif \n Entrez le degre suivi du coefficient \n");

	do {
        scanf("%d", &degre);
        if (degre < 0)
            break;
        else if (degre <= (*p).degre)
            scanf("%f", (*p).coef + degre);
    } while (degre >= 0);
    printf("\n");
    return 1;
}






/*4*/
/*int somme(Polynome p, Polynome q, Polynome*res){

}*/



int main(void){
	Polynome p;
	
	lirePolynome(&p);
	affichePolynome(p);
	free(p.coef);
	return	0;
}