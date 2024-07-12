#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node{
	char Mors[6];
	char Harf;
	struct node *next;
}nodes;
nodes * dbas=NULL,*dson=NULL,*yeni,*gecici;
void nokta(char harf, char kod[6]){
	int i =0;
    char yenim[6];
    for(i=0;i<strlen(kod)-1;i++){
    	yenim[i]=kod[i];
	}
	yeni = (nodes *) malloc(sizeof (nodes));
    yeni->Harf=harf;
    strcpy(yeni->Mors,yenim);
    yeni->next=NULL;
    if (dbas == NULL) {
        dbas = yeni;
        dson = dbas;
    } else {
        dson->next = yeni;
        dson = dson->next;
    }
}
void liste(){
	FILE *dosya = fopen("Mors.txt", "r");
	int maxsatir=25;
	char satir[maxsatir];
	while(fgets(satir,maxsatir,dosya)){
		char * parca;
		char  kod[6];
    	parca = strtok (satir,"9");
    	char harf = *parca;
    	parca = strtok (NULL,"9");
    	strcpy(kod,parca);
    	nokta(harf,kod);
	}
	fclose(dosya);
}
char kontrol(char * Kelimeler){
	int sonuc;
	char tempo[6];
	char deney[6];
	strcpy(deney,Kelimeler);
	char harf="+";
	gecici=dbas;
	while(gecici->next!=NULL){
		//printf("%s\t999\t%s\n",Kelimeler,temp->Mors);
		strcpy(tempo,gecici->Mors);
		sonuc=strcmp(deney,tempo);
		if (sonuc==0){
			harf=gecici->Harf;
			return harf;
		}
		else{
			gecici=gecici->next;
		}
	}
	return harf;
}
void print_list() {
    gecici=dbas;
    while (gecici != NULL) {
    	printf("%c\t",gecici->Harf);
        printf("%s\n", gecici->Mors);
        gecici = gecici->next;
    }
}
int main(){
	liste();
	print_list();
	char  aranacak[250];
	char * parca;
	gets(aranacak);
	parca = strtok (aranacak," ");
	while (parca != NULL)
	{
		char harf=kontrol(parca);
		printf("%c",harf);
		parca = strtok(NULL, " ");	
	}
	return 0;
}
