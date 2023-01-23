#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 20
#define MAX 21 /*Notes allant de 0 a 20*/
#define H 21


void initAlea(int Note[],int taille,int max)
{
    int i;

    for (i = 0; i < taille; i++)
        Note[i] = rand() % max;
}


void Histogramme(int Note[],int Histo[]){
	int pos,ind;

	for(pos=0;pos<H;pos++){
		for(ind=0;ind<MAX;ind++){
			if(Note[ind]==pos)
				Histo[pos]++;
		}
	}
}

int main(int argc, char const *argv[]){
	int Note[TAILLE]={0};
	int Histo[H]= {0};
	int i;
	srand(time(NULL));
	initAlea(Note,TAILLE,MAX);
	Histogramme(Note,Histo);
	for(i=0;i<H;i++){
		printf("%d Notes:\t%d\n",Histo[i],i);
	}
	return 0;
}