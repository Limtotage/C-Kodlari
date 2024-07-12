//3.soru
#include<stdio.h>
#include<conio.h>
#include<math.h>
void asalmi(int b1,int b2,int b3,int b4);
int main()
{
	asalmi(1,4,5,4);
}

void asalmi(int b1,int b2,int b3,int b4)
{ 
	int bayrak=1;
	int toplam;
	b1=1000*b1;
	b2=100*b2;
	b3=10*b3;
	toplam=b1+b2+b3+b4;
	
	for(int i=2;i<toplam;i++)
	{
		if(toplam%i==0)
		{
			printf("%d sayisi asal degildir.",toplam);
			bayrak=0;
			break;
		}
	}
	if(bayrak==1)
	{
		printf("%d sayisi asaldir.",toplam);
	}
}

