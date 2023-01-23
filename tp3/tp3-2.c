#include <stdio.h>
#include <math.h>
/* BUT : resoud une equation du second degre    */
/* PARAMETRES : valeur :les coefficients entiers*/
/*             adresse : 2 solutions possibles  */
/* RETOUR : le nombre de solution               */
/* -1 equation degeneree                        */
/* 0 pas de solution                            */
/* 1 un racine placee a l'adresse x             */
/* 2 deux racines placees aux adresses x et y   */

int resoudre(float a,float b,float c,double *r1,double *r2){
	double delta;
	if(a==0){
    if(b==0){
      if(c==0)      /*a==0,b==0,c==0*/
        return -1;
      else          /*a==0,b==0,c!=0*/
        return 0;
    }
    else{           
      if(c==0){     /*a==0,b!=0,c==0*/
        *r1=-b;     /* bx=0     -> x=-b*/
        return 1;
      }
      else{         /*a==0,b!=0,c!=0*/
        *r1=-c/b;   /*bx + c = 0   -> bx = -c   -> x=-c/b*/
        return 1;
      }
    }
  }
  else{
    delta=b*b-4*a*c;      /*cas ou a!=0 tout les cas sont directement traités */
  	if(delta<0)           /*delta negatif -> pas de solution*/
  		return 0;
  	else if (delta==0){   /*delta==0 une unique solution x=-b/2a*/
  		*r1=-b/(2*a);
  		return 1;
  	}
  	else{                  /*delta>0 deux solutions -> x1=-b+sqrt(delta)/2a & x2=-b-sqrt(delta)/2a*/
  		*r1=(-b+sqrt(delta))/(2*a);
  		*r2=(-b-sqrt(delta))/(2*a);
  		return 2;
  	}
  }
}

int main (void){
  double r1,r2;
  float a,b,c;
  int i;
  for(i=0;i<=10;i++){
    printf("Pour un polynome de la forme ax²+bx+c :\n");
    printf("Entrez la valeur de a : ");
    scanf(" %f",&a);
    printf("Entrez la valeur de b : ");
    scanf(" %f",&b);
    printf("Entrez la valeur de c : ");
    scanf(" %f",&c);
    switch(resoudre(a,b,c,&r1,&r2)){
    	case -1 : printf("---Il y a une infinitée de solutions---\n\n");break;
    	case 0 : printf("---Il n'y a pas de solutions---\n\n");break;
    	case 1 : printf("---Il y a une solution : %f ---\n\n",r1);break;
    	case 2 : printf("---Il y a deux solutions---\n---r1=%f et r2=%f---\n\n",r1,r2);break;
    }
  }
  return 0;
}