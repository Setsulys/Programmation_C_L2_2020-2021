#include <stdio.h>

int CompteCaraterres(FILE* fichier){
	int count=0;
	while(fgetc(fichier)!= EOF)
		count++;
	return count;
}

int CompteLignes(FILE* fichier){
	int count=1;
	char c;
	while((c=fgetc(fichier))!= EOF){
		if(c=='\n'){
			count++;
		}
	}
	printf("%d",count);
	return count;
}

int CompteMots(FILE* fichier){
	int count=1;
	char c;
	while((c=fgetc(fichier))!= EOF){
		if(c=='\n'||c=='\t'|| c==' ')
			count++;
	}
	return count;
}

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

void usage(char *nom){
	printf("---%s---\n",nom );
	printf("!!!Erreur de saisie!!!\n");
	printf("le premier argument se doit etre [-l] ou [-m] ou [-w] ou [-v] ou [ ]\n");
	printf("-m : affiche uniquement le nombre de caractères.");
	printf("-l : affiche uniquement le nombre de lignes.\n");
	printf("-w : affiche uniquement le nombre de mots.");
	printf(" affiche Les caracteres, lignes et mots Comptés \n");
}

void myprogram(char *nom){
	printf("-----%s-----\n",nom);
	printf("____Word Count____\n");
	printf("\n\nCrédits\n");
	printf("CompteCaraterres\tLY Steven\n");
	printf("CompteLignes\tLY Steven\n");
	printf("CompteMots\tLY Steven\n");
	printf("CompteTout\tLY Steven\n");
}

int main(int argc, char *argv[]){
	/*l'utilisateur choisis le fichier*/
	
	/*Le fichier se doit de comporter un mot */ 
	/*si le fichier ne comporte pas de mot il sera */
	/*consideré comme l'etant*/
	int i,count=0;
	int caracteres=0,lignes=0,mots=0;
	FILE*fichier;
	for(i=1;i<argc;i++){/*Si l'utilisateur met plusieurs fichiers en argument*/

		if(argv[1][0]=='-'){
			if(argv[1][1]=='l'){
				fichier=fopen(argv[2],"r");
				count=CompteLignes(fichier);
				fclose(fichier);
				if(count==1)
					printf("Le fichier %s contient 1 ligne\n",argv[i]);
				else
					printf("Le fichier %s contient %d lignes\n",argv[i],count);	
			}
			if(argv[1][1]=='m'){
				fichier=fopen(argv[i],"r");
				count=CompteCaraterres(fichier);
				fclose(fichier);
				printf("Le fichier %s contient %d caracteres\n",argv[i],count);
			}
			if(argv[1][1]=='w'){
				fichier=fopen(argv[i],"r");
				count=CompteMots(fichier);
				fclose(fichier);
				if(count==1)
					printf("Le fichier %s contient 1 Mot\n",argv[i]);
				else
					printf("Le fichier %s contient %d Mots\n",argv[i],count);
			}
			if(argv[1][1]=='v')
				myprogram(argv[0]);
			else
				usage(argv[0]);
		}
		else{
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
	}
	return 0;
}
