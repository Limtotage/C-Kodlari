#include<stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include<time.h>

int main()
{
	FILE *say;
	int i,a;
	say = fopen("Sayilar.txt","w");
	if(say==NULL) printf("Dosya Olusturulamadi.");
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		a=rand()%10000;
		fprintf(say,"%d \n",a);
	}
	printf("100 Tane Sayi Sayilar Adli Dosyaya kaydedilmistir.");
	fclose(say);
	getch();
	return 0;
}


