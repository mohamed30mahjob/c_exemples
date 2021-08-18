/*
 * ecrire un algorithme pour calculer la somme 
 * des chiffres qui composnt un entier naturel N
 * */


#include <stdio.h>
int main()
{
	int x,s,r;
	do
	{
		printf("entrer un nombre svp !\?\n");
		scanf("%d",&x);
	}while(x < 0);
	
	r = x; s = 0;
	while(r != 0)
	{
		s = s + r % 10;
		r = r / 10;
	}
	printf("la somme est: %d",s);
	
	return 0;	
}
 















