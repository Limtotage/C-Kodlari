#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Department{ 
char name[40]; int academicStaffCount; int studentCount; 
}; 
struct Faculty{ 
char name[40]; Department departments[2]; 
}; 
struct University{
 char name[40]; Faculty faculties[2]; 
}universities[2]; 

int main()
{
	float b;
	char isim[40];
	int calisan[2],ogrenci[2],i,j,k,a;
	for(i=0;i<2;i++)
	{
		int aktop=0;
		int ogtop=0;
		printf("Lutfen Universitenin Ismini Giriniz."
		); 
		gets(universities[i].name);
		for(j=0;j<2;j++)
		{
			printf("Lutfen Fakultenin Ismini Giriniz.");
			gets(universities[i].faculties[j].name);
			for(k=0;k<2;k++)
			{
				printf("Lutfen Bolumun Ismini Giriniz.");
				gets(universities[i].faculties[j].departments[k].name);
				printf("Lutfen Bolumunde Calisan Akademisyen Sayisini Giriniz.");
				scanf("%d",&universities[i].faculties[j].departments[k].academicStaffCount);
				aktop+=universities[i].faculties[j].departments[k].academicStaffCount;
				printf("Lutfen Bolumunde Calisan Ogrenci Sayisini Giriniz.");
				scanf("%d",&universities[i].faculties[j].departments[k].studentCount);
				ogtop+=	universities[i].faculties[j].departments[k].studentCount;	
				getchar();
			}
		}
		calisan[i]=aktop;
		ogrenci[i]=ogtop;
	}
	printf("Lutfen Sonucunu Istediginiz Universitenin Adini Giriniz."); 
	gets(isim);
	for(i=0;i<2;i++)
	{
		a=strcmp(isim,universities[i].name);
		if(a==0)
		{
			b=(float)ogrenci[i]/calisan[i];		
			printf("Universitenin Akademik Personel Basina Dusen Ogrenci Sayisi = %0.2f",b);
		}
	}
	getch();
	return 0;
}


