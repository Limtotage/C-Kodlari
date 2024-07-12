#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	int saat,dakika,saniye;
	saat=dakika=saniye=0;
	while(1){
		system("CLS");
		printf("%02d : %02d : %02d",saat,dakika,saniye);
		fflush(stdout);
		saniye++;
		if(saniye==60){
			saniye=0;
			dakika+=1;
		}
		if (dakika==60){
			dakika=0;
			saat+=1;
		}
		sleep(1);
	}
	return 0;
}

