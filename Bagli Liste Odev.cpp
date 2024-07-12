#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
struct Node{
	int sayi;
	struct Node *sonraki;
	struct Node *onceki;
};
int main()
{
	FILE *say;
	say=fopen("sayilar.txt","r");
	struct Node *ilk=NULL, *gecici=NULL, *onces=NULL, *yeni=NULL;
	while(!feof(say))
	{
		struct Node *yeni=(struct Node*) malloc(1*sizeof(struct Node));
		fscanf(say,"%d",&yeni->sayi);
		yeni->sonraki=NULL;
		yeni->onceki=NULL;
		if(ilk==NULL) 
		{
			ilk=yeni;
		}
		else if(ilk->sayi > yeni->sayi)
		{
			yeni->sonraki=ilk;
			ilk->onceki=yeni;
			ilk=yeni;
		}	
		else
		{
			onces = ilk;
			gecici= ilk->sonraki;
			while(gecici!=NULL)
			{
				if(gecici->sayi < yeni->sayi)
				{
					onces=onces->sonraki;
					gecici=gecici->sonraki;
				}
				else break;
			}
			if(gecici==NULL)
			{
				onces->sonraki=yeni;
				yeni->onceki=onces;
			}
			else
			{
				onces->sonraki=yeni;
				yeni->onceki=onces;
				yeni->sonraki=gecici;
				gecici->onceki=yeni;
			}
		}
	}
	fclose(say);
	gecici=ilk;
	printf("\n");
	while(gecici!=NULL)
	{
		printf("%d\n",gecici->sayi);
		gecici=gecici->sonraki;
	}
	printf("\n");
	gecici=ilk->sonraki;
	onces=ilk;
	while(onces!=NULL)
	{
		while(gecici!=NULL)
		{
			gecici=gecici->sonraki;
			onces=onces->sonraki;
		}
		printf("%d\n",onces->sayi);
		onces=onces->onceki;
	}
	return 0;
}


