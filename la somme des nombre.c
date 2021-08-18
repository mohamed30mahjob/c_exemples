/*
 * ecrire un algorithme pour calculer le max et le min
 * */


#include <stdio.h>
// method 1
/*
int main(int argc, char **argv)
{
	int i,n,max,min,val;
	do
	{
		printf("entrer N > 0 \?\n");
		scanf("%d",&n);
	}while(n <= 0);
	
	printf("entrer 1 nombre\n");
	scanf("%d",&val);
	
	max = val; min = val ;
	
	for(i=2;i<=n;i++)
	{
		printf("entrer %d nombre\n",i);
		scanf("%d",&val);
		if(val > max)
		{
			max = val;
		}
		else
		{
			if(val < min)
			{
				min = val;
			}
		}	
	}
	printf("le max est : %d et le min est : %d",max,min);
	return 0;
}*/
// methode 2

 int main(int argc, char **argv)
{
	int i,n,max,min,val;
	do
	{
		printf("entrer N > 0 \?\n");
		scanf("%d",&n);
	}while(n <= 0);
	
	for(i=1;i<=n;i++)
	{
		printf("entrer %d nombre\n",i);
		scanf("%d",&val);
		if(i == 1)
		{
		max = val;
		min = val;
		}
		if(val > max)
		{
			max = val;
		}
		else
		{
			if(val < min)
			{
				min = val;
			}
		}	
	}
	printf("le max est : %d et le min est : %d",max,min);
	return 0;
}

 















