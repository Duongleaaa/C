#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int count;
	do
	{
		printf("====================MENU====================\n");
		printf("1.Nhap vao chuoi ky tu.\n");
		printf("2.In ra do dai chuoi va noi dung chuoi vua nhap.\n");
		printf("3.In ra chuoi dao nguoc.\n");
		printf("4.In ra so luong chu cai trong chuoi.\n");
		printf("5.In ra so luong chu so trong chuoi.\n");
		printf("6.In ra so luong ki tu dac biet trong chuoi.\n");
		printf("7.Thoat.\n");
		int choice;
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Moi ban nhap vao chuoi ky tu:");// chi nhap duoc mot tu, lam cach nao nhap ca dau cach cach?
				scanf("%s",str);
				break;
			case 2:
				printf("Do dai cua chuoi la: %d\n", strlen(str));// strlen(str) xac dinh do dai chuoi 
				break;
			case 3:
				printf("Chuoi dao nguoc la:");
            	for (int i = strlen(str) - 1; i > 0; i--)
            	{
                printf("%c\t", str[i]);
            	}
            printf("\n");
            break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				exit (0);
		}
	}
	while(1==1);
	return 0;
}
