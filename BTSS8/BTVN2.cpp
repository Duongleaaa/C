#include <stdio.h>
int main()
{
    int row, col,sum=0;
    printf("Nhap so dong va so cot cua mang 2 chieu:");
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int f = 0; f < col; f++)
        {
            printf("numbers[%d][%d]=",i,f);
            scanf("%d",&numbers[i][f]);
        }
    }
    printf("C�c gi� tr? c� ph?n t? l� ch?n l�\n");
     for (int i = 0; i < row; i++)
    {
        for (int f = 0; f < col; f++)
        {
            if (numbers[i][f]%2==0)
            {
                sum+=numbers[i][f];
                printf("numbers[%d][%d]=%d\n",i,f,numbers[i][f]);
            }
        }
    }
    printf("T?ng c?a c�c ph?n t? �� l� %d", sum);
}
