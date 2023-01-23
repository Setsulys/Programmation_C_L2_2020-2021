#include <stdio.h>


int CompteCaraterres(FILE* fichier){
	int count=0;
	while(fgetc(fichier)!= EOF)
		count++;
	return count;
}


int main(int argc, char const *argv[]){
/*l'utilisateur choisis le fichier*/
	int nbchar,i;
	FILE*fichier;

	for(i=1;i<argc;i++){/*Si l'utilisateur met plusieurs fichiers en argument*/
		fichier=fopen(argv[i],"r");
		nbchar=CompteCaraterres(fichier);
		fclose(fichier);
		printf("Le fichier %s contient %d caracteres\n",argv[i],nbchar);
	}
	return 0;
}