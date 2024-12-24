#include <stdio.h>

int main(){
    int n, i, j, sum = 0;
    printf("Nhập vào số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    if(n < 1)
    {
        printf("Ma Trận nhập vào không hợp lệ");
    }
    int a[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Phần tử [%d], [%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Ma trận sau khi nhập: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for ( j = 0; j < n; j++)
    {
        sum += a[0][j];
    } 
    for ( i = 1; i < n; i++)
    {
        sum += a[i][0];
    }
    for(i = 1; i < n; i++)
    {
        sum += a[i][n];
    }
    printf("%d", sum);
    system("pause");
}