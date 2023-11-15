#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Nh?p s? ph?n t? có trong m?ng");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    int findNumber;
    printf("Nh?p giá tr? c?n t?m trong m?ng ");
    scanf("%d", &findNumber);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i]==findNumber)
        {
            printf("%d\n",i);
            sum++;
        }
    }
    printf("T?ng các ph?n t? có giá tr? b?ng s? ðc nh?p vào là %d",sum);
}
