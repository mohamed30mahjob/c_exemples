#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t start,end;
	start = time(NULL);
	int i,j,n=500,m=500;
	int t[500][500],max[500],min[500];
	
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			
			t[i][j] = rand();
			if(j==0)
			{
				max[i] = t[i][0];min[i] = t[i][0] ; 
			}
			if(t[i][j] > max[i])
			{
				max[i] = t[i][j];
			}
			else
			{
				if(t[i][j] < min[i])
				{
					min[i] = t[i][j];
				}
			}
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	end = time(NULL);
	printf("\n\n%f",difftime(end,start));
	return 0;
}
