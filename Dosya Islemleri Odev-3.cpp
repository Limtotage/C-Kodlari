#include<stdio.h>
#include <conio.h> 

int main()
{
	FILE *asal,*sayi;
	int i,j,top=0;
	sayi=fopen("Sayilar.txt","r");
	if(sayi==NULL) printf("Sayilar dosyasi Bulunamadi.");
	asal = fopen("Sayilar2.txt","w");
	if(asal==NULL) printf("Dosya olusturulamadi.");
	while(!feof(sayi))
	{
		fscanf(sayi,"%d ",&i);
		for(j=1;j<=i;j++)
		{	
			if(i%j==0) top=top+j;
		}
		if(i==top-1) fprintf(asal,"%d \n",i);
		top=0;
	}
	fclose(asal);
	fclose(sayi);
	printf("Asal Sayilar Sayilar 2 Adinda Bir Dosyaya Kaydedilmistir.");
	getch();
	return 0;
}


