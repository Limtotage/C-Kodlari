//1.soru 
#include<stdio.h>
#include<conio.h>
#include<math.h>

float cevrebul(int x1,int y1,int x2,int y2,int x3,int y3);
int main()
{
	printf("%f",cevrebul(10,10,13,14,10,14));
	//test etmek i�in 3-4-5 ��geni kulland�m 
	getch();
	return 0;
}

//main k�sm� s�navda istenmiyordu sadece altta kalan bu k�s�mdan sorumluyduk  
float cevrebul(int x1,int y1,int x2,int y2,int x3,int y3)
{
	float kenar1,kenar2,kenar3;
	
	kenar1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	kenar2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	kenar3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	
	return kenar1+kenar2+kenar3;
}



