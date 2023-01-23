#include <stdio.h>

int main(){
	int j,s,a,m,se,jours;
	s=0;
	a=0;
	m=0;
	se=0;
	printf("Entrez le nombre de jours souhaité : \n");
	do{
		printf("Jours : ");
		scanf("%d",&j);
	}while(j<0);

	jours=j;
	while (j>=36000){
		j=j-36000;
		s=s+1;
	}
	while(j>=360){
		j=j-360;
		a=a+1;
	}
	while(j>=30){
		j=j-30;
		m=m+1;
	}
	while(j>=7){
		j=j-7;
		se=se+1;
	}
	printf("%d jours correspondent à : \n",jours);
	if (s>=2)
		printf("%d siecles ",s);
	else
		printf("%d siecle ",s);
	if (a>=2)
		printf("%d années ",a);
	else
		printf("%d année ",a);
	printf("%d mois ",m);	
	if (se>=2)
		printf("%d semaines ",se);
	else
		printf("%d semaine ",se);
	if (j>=2)
		printf("%d jours\n", j);
	else
		printf("%d jour \n",j );
	return 0;
}