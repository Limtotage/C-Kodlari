#include<conio.h>
#include<stdio.h>
struct isci{
	char adi[50];
	char soyadi[25];
	int yas;
	double maas;
};
isci bilgialma(isci x)
{
	printf("Lutfen iscinin ismini giriniz . \n");
	gets(x.adi);
	printf("Lutfen iscinin soyadini giriniz. \n");
	gets(x.soyadi);
	printf("Lutfen iscinin yasini giriniz. \n");
	scanf("%d",&x.yas);
	printf("Lutfen iscinin maasini giriniz. \n");
	scanf("%lf",&x.maas);
	
	return x;
}
int main()
{
	isci isci1;
	isci1=bilgialma(isci1);
	printf("Iscinin bilgileri:\n Adi = %s \n",isci1.adi);
	printf(" Soyadi = %s \n",isci1.soyadi);
	printf(" Yasi = %d \n",isci1.yas);
	printf(" Maasi = %0.2lf",isci1.maas);
	getch();
	return 0;
}



