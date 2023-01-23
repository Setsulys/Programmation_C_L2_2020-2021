#include <stdio.h>

int CompteLignes(FILE* fichier){
	int count=1;
	char c;
	while((c=fgetc(fichier))!= EOF){
		if(c=='\n'){
			count++;
		}
	}
	return count;
}


int main(int argc, char const *argv[]){
	/*l'utilisateur choisis le fichier*/
	
	/*Le fichier se doit de comporter un mot */ 
	/*si le fichier ne comporte pas de mot il sera */
	/*consideré comme l'etant*/
	int nblignes,i;
	FILE*fichier;
	
	for(i=1;i<argc;i++){/*Si l'utilisateur met plusieurs fichiers en argument*/
		fichier=fopen(argv[i],"r");
		nblignes=CompteLignes(fichier);
		fclose(fichier);
		if(nblignes==1)
			printf("Le fichier %s contient 1 ligne\n",argv[i]);
		else
			printf("Le fichier %s contient %d lignes\n",argv[i],nblignes);
	}
	return 0;
}