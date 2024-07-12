//soru 5

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char koruma[5];
	char metin1[5],metin2[5];
	
	printf("birinci: ");
	gets(metin1);
	
	for(int i=0;i<5;i++)
	{
		koruma[i]=metin1[i];
	}
	printf("ikinci: ");
	gets(metin2);	
	int sayac=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(koruma[i]==koruma[j])
			{
				sayac++;
			}
		}
		for(int k=0;k<5;k++)
		{
			if(koruma[i]==metin2[k])
			{
				sayac--;
			}
		}
		if(sayac!=0)
		{
			break;
		}
	}
	int bayrak=0;
	for(int i=0;i<5;i++)
	{
		if(koruma[i]!=metin2[i])
		{
			bayrak=1;
		}
	}
	if(bayrak==1 && sayac==0)
	{
		printf("Bu iki kelime anagramdir.");
	}
	else
	{
		printf("Bu iki metin anagram degildir.");
	}
	
	getch();
	return 0;
}
