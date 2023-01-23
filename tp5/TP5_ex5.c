#include <stdio.h>
#include <MLV/MLV_all.h>


void saisie_souris(int x,int y,int n){
	int i;
	int cox;
	int coy;
	int a[n];
	int b[n];
	MLV_create_window("fenetre","reation",x,y);
	for (i=0;i<n;i++){
		MLV_wait_mouse(&cox,&coy);
		a[i]=cox;
		b[i]=coy;
	}
	MLV_draw_polygon(a,b,n,MLV_COLOR_STEELBLUE1);
	MLV_actualise_window();
	MLV_wait_seconds(15);
}

int main(void){
	int x;
	int y;
	int n;
	printf("Entrez la longueur: ");
	scanf("%d",&x);
	printf("Entrez la largeur: ");
	scanf("%d",&y);
	printf("Entrez le nombre d'occurence :" );
	scanf("%d",&n);

	saisie_souris(x,y,n);	
	return 0;
}


