#include <stdio.h>

int main(int argc, char const *argv[]){
	int cache,val,count;
	count=1;
	printf("Trouvez un entier compris entre 0 et 1000 \n");
	do{
		printf("Entrez une valeur entre 0 et 1000 : ");
		scanf("%d",&cache);
		}while(cache>1000||cache<0);
	do{
		printf("essais n°%d : ",count);
		scanf("%d",&val);
		if(val<0 || val >1000)
			printf("Valeurs non comprise entre 0 et 1000\n ressayez \n\n");
		if (val>cache && val<1000){
			printf("c'est moins\n");
			count++;
		}
		if (val<cache && val>0){
			printf("c'est plus\n");
			count++;
		}
	}while(val!=cache && count<=10);
	if(count<=10 && val==cache)
		printf("\nGagné en %d coups\n",count);
	else
		printf("\nperdu\n");
	return 0;
}