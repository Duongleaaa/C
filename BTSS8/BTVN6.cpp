#include <stdio.h>
int main()
{
    int num;
    printf("nhap so phan tu ");
    scanf("%d", &num);
    int oldarr[num],newarr[num-1];
    for (int i = 0; i < num; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &oldarr[i]);
    }
    printf("vi tri phan tu can xoa: ");
    int deleteIndex;
    scanf("%d", &deleteIndex);
    for (int i = 0; i < deleteIndex-1; i++)
    {
        oldarr[i] = newarr[i];
    }

    for (int i = 0; i < deleteIndex+1; i++)
    {
       oldarr[i] = newarr[i];
    }
}
