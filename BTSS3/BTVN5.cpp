#include<stdio.h>
int main(){
	int thousandDigit,hundredDigit,dozenDigit,unitDigit;
	printf("Moi ngai nhap so hang nghin, hang tram, hang chuc va hang don vi!");
	scanf("%d\n %d\n %d\n %d", &thousandDigit, &hundredDigit, &dozenDigit, &unitDigit);
	int sumN=thousandDigit+hundredDigit+dozenDigit+unitDigit;
	printf("Tong cac chu so la: \n %d \n",sumN);
	printf("Cac chu so dao nguoc la: \n %d%d%d%d", unitDigit,dozenDigit,hundredDigit,thousandDigit);
}
