#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	unsigned short x,y;
	int n,i;
	srand(time(NULL));
	FILE *say1,*say0;
	say1=fopen("sayilar1.txt","w");                    
	say0=fopen("sayilar0.txt","w");
	for(i=0;i<100;i++)
	{
		x=rand()%100;
		if(x&1<<4)
		{
			y=1<<2;
			y=~y;
			x=x&y;
			fprintf(say1,"%d\n",x);
		}
		else 
		{
			x=x|1<<3;
			fprintf(say0,"%d\n",x);
		}
	}
	printf("Sayilar 1 ve Sayilar 0 a Kaydedilmistir.\n",x);
	fclose(say1);
	fclose(say0);
	return 0;
}



