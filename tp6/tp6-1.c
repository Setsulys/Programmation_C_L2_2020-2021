#include <stdio.h>

int main (int argc,char * argv[]){
	FILE *flux;
	int i;
	int count=0;
	printf("le nombre d'argument %d \n",argc);
	for (i=0;i<argc;i++)
		if (argv[i][0]=='-')
			count++;
	printf("le nombre d'occurence de '-'est de %d \n",count);
	for (i=0;i<argc;i++){
		if (argv[i][0]!='-'&&(flux=fopen(argv[i],"r"))!=NULL)
			printf("%s peut etre lu\n",argv[i]);
	fclose(flux);
	}
	return 0;
}
