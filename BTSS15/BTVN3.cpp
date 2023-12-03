#include <stdio.h>

struct sinhVien
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};
typedef struct sinhVien sv;
void input(sv *a, int i)
{
    printf("nhap ten ");
    getchar();
    gets((a + i)->name);
    printf("nhap tuoi ");
    scanf("%d", &((a + i)->old));
    printf("nhap sdt ");
    scanf("%d", &((a + i)->phoneNumber));
    printf("nhap email ");
    getchar();
    gets((a + i)->email);
}
void output(sv *a, int i)
{
    printf("Cac thong tin ve hoc sinh thu %i la\n", i);
    printf("Name");
    puts((a + i)->name);
    printf("OLD:");
    printf("%d", ((a + i)->old));
    printf("PhoneNumber=");
    printf("\n%d\n", ((a + i)->phoneNumber));
    printf("Email");
    puts((a + i)->email);
}
void delete(sv *a, int j, int count)
{
    for (int i = j; i < count; i++)
    {
        *(a + i) = *(a + i + 1);
    }
}
struct sinhVien student[50];

int main()
{
    int n, currentIndex = 0, index = 0,updateIndex=0;
    do
    {
        printf("1.Nhap them sinh vien\n");
        printf("2.Sua\n");
        printf("3.Xoa\n");
        printf("4.In ra danh sach hoc sinh");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so sinh vien muon them \n");
            getchar();
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                input(student, currentIndex);
                currentIndex++;
            }
            for (int i = 0; i < currentIndex; i++)
            {
                output(student, i);
            }
            break;
        case 2:
            printf("Nhap vi tri phan tu ban muon cap nhap");
            scanf("%d",&updateIndex);
            if (updateIndex>=0&&updateIndex<currentIndex)
            {
                input(&student,updateIndex);
            }
            else{
                printf("Vi tri ko hop le");
            }
            break;
        case 3:
            printf("Nhap vi tri phan tu muon xoa trong mang\n");
            scanf("%d", &index);
            if (index < currentIndex)
            {
                delete (student, index, currentIndex);
                currentIndex--;
                for (int i = 0; i < currentIndex; i++)
                {
                    output(student, i);
                }
            }
            else{
                printf("phan tu do ko ton tai");
            }
            break;
        case 4:
        for (int i = 0; i < currentIndex; i++)
        {
            output(student,i);
        }
            break;
        default:
            break;
        }
    } while (1);
}
