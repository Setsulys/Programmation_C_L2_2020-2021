#include <stdio.h>

void ajouteDix(int *n){
	*n=*n+10;
}

void echange(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(int argc, char const *argv[])
{	int n;
	int a,b;
	printf("donnez une valeur de n : ");
	scanf("%d",&n);
	ajouteDix(&n);
	printf("cela fait :%d\nadresse %p\n",n,&n);

	printf("donnez deux valeurs a echanger : ");
	scanf("%d",&a);
	scanf("%d",&b);
	echange(&a,&b);
	printf("%d adresse %p \n%d adresse %p\n",a,&a,b,&b);
	return 0;
}