#include <stdio.h>

int LireInf2(int Joueur){
	int val;
	do{	
		printf("Choisisez une valeur : ");
		scanf("%d",&val);
		if(val!=0&&val!=1&&val!=2)
			printf("Valeurs incorrectes\n");
	}while(val!=0 && val!=1 && val!=2);
	return val;
}

int arbitre(int J1,int J2){
	if(J1 == J2)
		return 0;
	if(J1==((J2+1)%3))
		return 1;
	else
		return 2;
}

int main(int argc, char const *argv[]){	
	int J1,J2,gagnant,count;
	int draw,v1,v2;
	v1=0;
	v2=0;
	draw=0;
	count=0;
	for(count;count<10;count++){
		printf("\n\n**partie n° %d**\n",count+1 );
		J1=LireInf2(J1);
		J2=LireInf2(J2);
		gagnant = arbitre(J1,J2);
		if(J1!=J2){
			printf("le gagnant est  : %d\n",gagnant);
			if(gagnant == 1)
				v1++;
			else
				v2++;
		}
		else{
			printf("\négalité\n");
			draw++;
		}
	}
	printf("\n\n\nVictoires de J1 : %d\nVictoires de J2 : %d\nEgalités : %d\n",v1,v2,draw);
	return 0;
}