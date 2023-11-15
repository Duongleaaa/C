#include <stdio.h>
int main()
{
    int num;
    printf("nhap so phan tu mang ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("nhap phan tu dua vao");
    int addValue;
    scanf("%d", &addValue);
    printf("nhap vi tri phan tu can dua vao");
    int index;
    scanf("%d", &index);
    for (int i = sizeof(arr) / sizeof(int); i > index; i--)
    {
      
        arr[i] = arr[i-1];
    }
    arr[index] = addValue;
    for (int i = 0; i < (sizeof(arr) / sizeof(int))+1; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }

}
