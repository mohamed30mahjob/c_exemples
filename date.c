#include <stdio.h>

struct date
{
	int JJ,MM,AA;
	
};
void transdate(struct date* _1D,struct date* _2D)
	{
		int TEMP;
		//jours
		TEMP = _1D->JJ ;
		_1D->JJ = _2D->JJ ;
		_2D->JJ = TEMP;
		
		//mois
		TEMP = _1D->MM ;
		_1D->MM = _2D->MM ;
		_2D->MM = TEMP;
		
		//annee
		TEMP = _1D->AA ;
		_1D->AA = _2D->AA ;
		_2D->AA = TEMP;	
	}
int main()
{
	struct date _1D,_2D,_FD;
	int NUMD = 0,TEMP;
	
	printf("entrer la date 1:\n");
	scanf("%d%d%d",&_1D.JJ,&_1D.MM,&_1D.AA);
	
	printf("entrer la date 2:\n");
	scanf("%d%d%d",&_2D.JJ,&_2D.MM,&_2D.AA);
	
	//reverse between _2D and _1D
	if(_2D.AA < _1D.AA)
	{
		transdate(&_1D.AA,&_2D.AA);
	}
	else
	{
		if(_2D.MM < _1D.MM)
		{
			transdate(&_1D.AA,&_2D.AA);
		}
		else
		{
			if(_2D.AA < _1D.AA)
			{
				transdate(&_1D.AA,&_2D.AA);
			}
		}
	}
	//operation
	_FD.AA = _2D.AA - _1D.AA ;
	_FD.MM = _2D.MM - _1D.MM ;
	_FD.JJ = _2D.JJ - _1D.JJ ;
	NUMD = _FD.AA*365 + _FD.MM*30 + _FD.JJ;// 1 mois = 30.436875 jours*12 =365.24 day = 1year
	printf("%d",NUMD);
	return 0;
}

