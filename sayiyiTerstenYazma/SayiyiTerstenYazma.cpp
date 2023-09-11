#include<stdio.h>
int main(){
	// Girilen Sayýyý Tersten Yazan Program
	
	int sayi,ters;
	
	printf("Lutfen Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	while(sayi!=0)
	{
		ters=ters*10;
		ters=ters+sayi%10;
		sayi=sayi/10;
		
	}
	
	printf("\nGirdiginiz Sayinin Tersi Sudur:%d",ters);
	
	
	return 0;
}
