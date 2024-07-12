#include<stdio.h>
int top(int x)
{
	if(x==1) return 1;
	return x+top(x-1);
}
int main()
{
	int x,sonuc;
	printf("Lutfen Sayiyi giriniz. \n");
	scanf("%d",&x);
	sonuc=top(x);
	printf("sonuc= %d",sonuc);
	return 0;
}


