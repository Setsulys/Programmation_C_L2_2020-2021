#include <stdio.h>

int CompteMots(FILE* fichier){
	int count=1;
	char c;
	while((c=fgetc(fichier))!= EOF){
		if(c=='\n'||c=='\t'|| c==' ')
			count++;
	}
	return count;
}


int main(int argc, char const *argv[]){
	/*l'utilisateur choisis le fichier*/
	
	/*Le fichier se doit de comporter un mot */ 
	/*si le fichier ne comporte pas de mot il sera */
	/*consideré comme l'etant*/
	int nbMots,i;
	FILE*fichier;
	for(i=1;i<argc;i++){/*Si l'utilisateur met plusieurs fichiers en argument*/
		fichier=fopen(argv[i],"r");
		nbMots=CompteMots(fichier);
		fclose(fichier);
		if(nbMots==1)
			printf("Le fichier %s contient 1 Mot\n",argv[i]);
		else
			printf("Le fichier %s contient %d Mots\n",argv[i],nbMots);
	}
	return 0;
}