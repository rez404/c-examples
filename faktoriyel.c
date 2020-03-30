#include <stdio.h>
#include <locale.h>
int faktoriyelHesapla(int a){
	int faktoriyel=1;
	for(a;a>1;a--){
		faktoriyel=faktoriyel*a;	
		
	}
	return faktoriyel;
}

int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	printf("sayý giriniz:");
	scanf("%d", &sayi);
	printf("%d Faktoriyel: %d", sayi, faktoriyelHesapla(sayi));
	
	return 0;	
}



