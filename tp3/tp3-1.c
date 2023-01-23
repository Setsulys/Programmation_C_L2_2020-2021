#include <stdio.h>

int ValAbsolue(int a){
	if (a<0)
		return -a;
	return a;
}

int main(int argc, char const *argv[]){
	int a;
	printf("Entrez une valeur : ");
	scanf("%d",&a);
	printf("La valeur absolue est : %d\n",ValAbsolue(a));
	return 0;
}