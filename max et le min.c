/*
 * ecrire un algorithme pour calculer le quotient et le reste
 * de la division sans utiliser l'operation dedivision
 * */


#include <stdio.h>


int main(int argc, char **argv)
{
	int a,b,r,q;
	printf("entrer A:\n");
	scanf("%d",&a);
	
	printf("entrer B:\n");
	scanf("%d",&b);
	
	q = 0;r = a;
	do
	{
		r = r - b;
		q ++;//q += 1 ;q = q + 1 ;
	}while(r >= b);
	printf("le quotion est :%d et rest :%d",q,r);
	return 0;
}

 















