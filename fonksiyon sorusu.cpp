#include<stdio.h>
int obeb(int x,int y)
{
	if(y==0) return x;
	return obeb (y,x%y);	
}
int main()
{
	int x,y,sonuc;
	printf("birinci sayiyi giriniz.\n");
	scanf("%d",&x);
	printf("ikinci sayiyi giriniz.\n");
	scanf("%d",&y);
	sonuc=obeb(x,y);
	printf("obeb(%d,%d)=%d",x,y,sonuc);
	return 0;
}


