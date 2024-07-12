#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
	struct tm* szm;
	time_t hamzaman;
	char depo[80];
	while(1){
		system("CLS");
		time(&hamzaman);
		szm =localtime(&hamzaman);
		strftime(depo, 80,"%I:%M:%S",szm);
		puts(depo);
		sleep(1);
	}
	return 0;
}

