/*LY Steven TP4*/
/*Exercice 3 : Histogramme*/

#include <stdio.h>
#define N 10 /*Nombres de notes */
#define H 21 /*Notes allant de 0 a 20*/


void Histogramme(int Note[],int Histo[]){
	int pos,ind;

	for(pos=0;pos<H;pos++){
		for(ind=0;ind<N;ind++){
			if(Note[ind]==pos)
				Histo[pos]++;
		}
	}
}

int main(int argc, char const *argv[]){
	int Note[N]={0,20,18,4,17,18,0,20,5,20};/*0:2; 4:1; 5:1; 17:1; 18:2; 20:3*/
	int Histo[H]= {0};
	int i;
	Histogramme(Note,Histo);
	for(i=0;i<H;i++){
		printf("%d Notes:\t%d\n",Histo[i],i);
	}
	return 0;
}