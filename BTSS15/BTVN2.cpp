#include <stdio.h>

struct sinhVien
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};
typedef struct sinhVien sv;
void input(sv *a)
{
    printf("nhap ten ");
    gets(a->name);
    printf("nhap tuoi ");
    scanf("%d", &(a->old));
    printf("nhap sdt ");
    scanf("%d", &(a->phoneNumber));
    printf("nhap email ");
    getchar();
    gets(a->email);
}
void output(sv *a)
{
    printf("Cac thong tin ve hoc sinh do la");
    puts(a->name);
    printf("\n%d\n", (a->old));
    printf("\n%d\n", (a->phoneNumber));
    puts(a->email);
}
int main()
{
    struct sinhVien student1;
    input(&student1);
    output(&student1);
}
