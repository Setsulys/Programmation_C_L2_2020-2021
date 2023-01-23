#include <stdio.h>

int main(int argc, char const *argv[]){
	int var;
	for(var=65;var<91;var++)
		printf("le caractere %c code %d\n",var,var);
	printf("\n");
	for(var=48;var<58;var++)
		printf("le numero %c code %d\n",var,var );
	return 0;
}