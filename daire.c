//Yarý çapý dýþardan girilen bir dairenin çevresini ve alanýný bulan c programý.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int yaricap;
	float pi=3.14;
	printf("yarýçapý giriniz:");
	scanf("%d",&yaricap);
	
	printf("Yarýçapýný girdiðiniz dairenin çevresi: %.2f \n Yarýçapýný Girdiðiniz dairenin alaný: %.2f", (2*pi*yaricap),(pi*(yaricap*yaricap)));
	
	return 0;
}
