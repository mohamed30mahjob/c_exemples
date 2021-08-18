/*
 * ecrire un algorithme pour calculer la somme des N nombre
 * */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i,n,s=0,val;
	printf("veuillez entrer N \?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)//for(i=1;i<=n;i++)
	{
		printf("entrer le %d nombre\n",i+1);//printf("entrer le %d nombre",i);
		scanf("%d",&val);
		s = s + val;
	}
	printf("la somme est :%d",s);
	return 0;
}

