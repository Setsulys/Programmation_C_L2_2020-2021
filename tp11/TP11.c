#include <stdio.h>


typedef struct cellule{
	int valeur;
	struct cellule *suivant;
}Cellule, *Liste;


Liste allouerCellule(int val){
	Liste tmp;
	tmp=(Cellule*)malloc(sizeof(Cellule));
	if (tmp!=NULL){
		tmp->valeur=val;
		tmp->suivant=NULL;
	}
	return tmp;
}

int insertionOrdonnee(Liste* lst, int val){

	 Liste index, tmp;
	tmp=allouerCellule(val);
	if (tmp!=NULL){
		if (*lst==NULL){
			*lst=tmp;
			return 1;
		}
		if((*lst)->valeur>val){
			tmp->suivant=*lst;
			return 1;
		}
		index=*lst;
		while(index->suivant!=NULL && index->valeur>val){
			index=index->suivant;
		}
		tmp->suivant=index->suivant;
		index->suivant=tmp;
		return 1;
	}
	return 0;
}

int creeListeTriee(int n, Liste*lst){
	int i;
	for(i=0;i<n;i++){
		if (insertionOrdonnee(lst,rand()%(2*n))==0){
			return i;
		}
		return n;
	}
}

int nombreInferieur(Liste lst, int val){
	int cpt=0;
	for(;lst!=NULL&& lst->valeur<val; lst=lst->suivant){
		cpt++;
	}
	return cpt;
}


int supprimeDoublon(Liste lst){
	Liste index, tmp;
	int cpt=0;
	index=lst;
	while (lst->suivant!=NULL){
		if(index->valeur==index->suivant->valeur){
			tmp=index->suivant;
			index->suivant=tmp->suivant;
			free(tmp);
			cpt+=1;
		}
		else {
			index=index->suivant;
		}
	}
}

void fusion(Liste *un , Liste *deux){
	Liste index, other, tmp;
	if(*deux==NULL)
		return 0;
	
	if(*un==NULL){
		*un=*deux;
		*deux=NULL;
	}
	if((*un)->suivant>(*deux)->suivant){
		tmp=*un;
		*un=*deux;
		*deux=tmp;
		index=*un;
		other=*deux;
	}
	while(index->suivant!=NULL && other !=NULL){
		if (other->valeur<index->suivant->valeur){
			tmp=index->suivant;
			index->suivant=other;
			other=tmp;
			index=index->suivant;
		}
		else{
			index=index->suivant;
		}
	}
	if(index->suivant==NULL){
		index->suivant=other;
	}

}

int main(void){
	
	insertionOrdonnee(&Liste,val);
	creeListeTriee(&Liste,n);
	nombreInferieur(&Liste,val);
	supprimeDoublon(&Liste);
}
