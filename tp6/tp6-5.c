#include <stdio.h>

void CompteTout(FILE* fichier,int* caracteres, int *lignes, int *mots){
	char c;
	*caracteres=0,*lignes=1,*mots=1;
	while((c=fgetc(fichier))!= EOF){
		
		*caracteres+=1;
		if(c=='\n')
			*lignes+=1;
		if(c=='\n'||c=='\t'|| c==' ')
			*mots+=1;
	}
}


int main(int argc, char const *argv[]){
	/*l'utilisateur choisis le fichier*/
	
	/*Le fichier se doit de comporter un mot */ 
	/*si le fichier ne comporte pas de mot il sera */
	/*consideré comme l'etant*/
	int i;
	int caracteres=0,lignes=0,mots=0;
	FILE*fichier;
	
	for(i=1;i<argc;i++){/*Si l'utilisateur met plusieurs fichiers en argument*/
		fichier=fopen(argv[i],"r");
		CompteTout(fichier,&caracteres,&lignes,&mots);
		fclose(fichier);

		printf("Le fichier :%s contient : \n",argv[i] );
		if(caracteres==1)
			printf("caractere : %d\n",caracteres);
		else
			printf("caracteres : %d\n",caracteres);
		if(lignes==1)
			printf("ligne : %d\n",lignes);
		else
			printf("lignes : %d\n",lignes);
		if(mots==1)
			printf("Mot : %d\n",mots);
		else
			printf("Mots : %d\n",mots);
		printf("\n");
	}

	return 0;
}