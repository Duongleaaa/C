#include<stdio.h>
struct sinhVien
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};

int main(){
    struct sinhVien student1;
    printf("nhap ten ");
    gets(student1.name);
    printf("nhap tuoi ");
    scanf("%d",&student1.old);
    printf("nhap sdt ");
    scanf("%d",&student1.phoneNumber);
    printf("nhap email ");
    getchar();
    gets(student1.email);

    printf("%s",student1.name);
}
