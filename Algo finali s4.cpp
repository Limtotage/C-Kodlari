//soru 4
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int dizi[5][5];
	int ebi,ebj;
	int eki,ekj;
	int eb=-2147483646;
	int ek=2147483646;
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			printf("%d.satir %d.stunu giriniz: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
			if(eb<dizi[i][j])
			{
				eb=dizi[i][j];
				ebi=i;
				ebj=j;
			}
			
			if(ek>dizi[i][j])
			{
				ek=dizi[i][j];
				eki=i;
				ekj=j;
			}
		}
	}
	printf("%d.satir %d. sutunda dizinin en büyük elemani olan %d sayisi bulunmaktadir.\n",ebi,ebj,eb);
	printf("%d.satir %d. sutunda dizinin en kücük elemani olan %d sayisi bulunmaktadir.\n",eki,ekj,ek);
}

