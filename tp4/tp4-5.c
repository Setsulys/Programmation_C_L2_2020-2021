/* LY Steven TP4*/
/*Exercice 5 : Somme de deux tableaux*/


#include <stdio.h>
#define N 10

void sommeTab(int A[], int B[], int Resultat[]){
	int pos;

	for(pos=0; pos<N; pos++)
		Resultat[pos]=A[pos];
	for(pos=0; pos<N; pos++)
		Resultat[pos]+=B[pos];
}

int main(int argc, char const *argv[]){
	int A[N]={1,2,3,4,5,6,7,8,9,10};
	int B[N]={10,20,30,40,50,60,70,80,100,0};
	int Resultat[N]={0};
	int i;

	sommeTab(A,B,Resultat);
	for(i=0; i<N; i++){
		printf("%d\n",Resultat[i]);
	}
	return 0;
}