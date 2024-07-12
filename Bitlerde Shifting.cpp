
#include<stdio.h>
int hulahop(unsigned short x,int n)
{
	int y,i;
	for(i=0;i<n;i++)
	{
		if(x&1<<15) 
		{ 
			y=1;
			x=x<<1;
			x=x|y;  
		}
		else x=x<<1;
	}
	return x;
}
int main()
{
	unsigned short x;
	int n;
	printf("Sayiyi girin. \n");
	scanf("%u",&x);
	printf("Kac kere sola shiftlenecek. \n");
	scanf("%d",&n);
	x=hulahop(x,n);
	printf("%d",x);
	return 0;
}



