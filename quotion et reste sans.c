/*
 * ecrire un algorithme pour calculer produit de deux entier
 * en utilisant (+) la somme uniquement
 * */


#include <stdio.h>


int main(int argc, char **argv)
{
	int a,b,i,s=0;
	printf("entrer A:\n");
	scanf("%d",&a);
	
	printf("entrer B:\n");
	scanf("%d",&b);
	
	/* A = 15
	 * B = 953152
	 * 
	 int x;
	 if(b > a){
	  x = a;
	  a = b;
	  b = x;
	  
	}
	*/
	for(i=1 ;i <= b ;i++ )
	{
		s = s + a ;
	}
	printf("%d",s);
	return 0;
}

 















