//Yar� �ap� d��ardan girilen bir dairenin �evresini ve alan�n� bulan c program�.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int yaricap;
	float pi=3.14;
	printf("yar��ap� giriniz:");
	scanf("%d",&yaricap);
	
	printf("Yar��ap�n� girdi�iniz dairenin �evresi: %.2f \n Yar��ap�n� Girdi�iniz dairenin alan�: %.2f", (2*pi*yaricap),(pi*(yaricap*yaricap)));
	
	return 0;
}
