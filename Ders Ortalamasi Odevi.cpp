#include <stdio.h>
#include <conio.h>
struct Ders{
	int derskodu;
	int vize;
	int final;
	double gecmenotu;
};
struct ogrenci{
	char adi[25];
	char soyadi[25];
	int no;
	struct Ders Dersler[5];
};

int main()
{
	int i,j;
	float a;
	ogrenci ogrenci1[5];
	for(i=0;i<5;i++)
	{
		printf("Lutfen %d. Ogrencinin adini giriniz.   ",i+1);
		gets(ogrenci1[i].adi);
		printf("Lutfen %d. Ogrencinin soyadini giriniz.   ",i+1);
		scanf("%s",ogrenci1[i].soyadi);
		printf("Lutfen %d. Ogrencinin numarasini giriniz.   ",i+1);
		scanf("%d",&ogrenci1[i].no);
		for(j=0;j<5;j++)
		{
			printf("Lutfen %d. dersin kodunu giriniz.   ",j+1);
			scanf("%d",&ogrenci1[i].Dersler[j].derskodu);
			printf("Lutfen %d-%s-%s'in %d ders kodlu vizesini giriniz.   ",ogrenci1[i].no,ogrenci1[i].adi,ogrenci1[i].soyadi,ogrenci1[i].Dersler[j].derskodu);
			scanf("%d",&ogrenci1[i].Dersler[j].vize);
			printf("Lutfen %d-%s-%s'in %d ders kodlu finalini giriniz.   ",ogrenci1[i].no,ogrenci1[i].adi,ogrenci1[i].soyadi,ogrenci1[i].Dersler[j].derskodu);
			scanf("%d",&ogrenci1[i].Dersler[j].final);
			a=(double)(ogrenci1[i].Dersler[j].vize*4+ogrenci1[i].Dersler[j].final*6)/10;
			ogrenci1[i].Dersler[j].gecmenotu=a;
		}
		getchar();
	}
	for(i=0;i<5;i++)
	{
		printf("Adi = %s \n",ogrenci1[i].adi);
		printf("SoyAdi = %s \n",ogrenci1[i].soyadi);
		printf("No = %d \n",ogrenci1[i].no);
		for(j=0;j<5;j++)
		{
			printf("%d Kodlu Dersin Gecme notu = %0.2lf \n",ogrenci1[i].Dersler[j].derskodu,ogrenci1[i].Dersler[j].gecmenotu);
		}
	}
	getch();
	return 0;
}


