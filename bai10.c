#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i, temp, j, min, luachon, col, row, k;
    
    // Nhập số phần tử vào mảng hai chiều
    printf("Nhập số hàng: ");
    scanf("%d", &row);
    printf("Nhập số cột: ");
    scanf("%d", &col);
    printf("\n");
    int a[row][col];
    
    // Nhập các phần tử vào mảng hai chiều
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Nhập phần tử a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Lặp cho đến khi người dùng chọn thoát
    while (true)
    {

        // Hiển thị Menu
        printf("\nMENU\n");
        printf("\n1. In giá trị mảng theo ma trận\n");
        printf("\n2. Sắp xếp mảng có giá trị các phần tử theo dòng tăng dần\n");
        printf("\n3. Sắp xếp mảng có giá trị các phần tử theo cột giảm dần\n");
        printf("\n4. Thoát\n");
        printf("\nNhập vào lựa chọn của bạn: ");
        scanf("%d", &luachon);
        
        switch (luachon)
        {
         
        // In ra các giá trị trong mảng
        case 1:
            printf("\n");
            for ( i = 0; i < row; i++)
            {
                for ( j = 0; j < col; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            break;

        // Sắp xếp mảng có giá trị các phần tử theo dòng tăng dần
        case 2:
            printf("\n");
            printf("\nMảng ban đầu: ");
            for ( i = 0; i < row; i++)
            {
                for ( j = 0; j < col; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for (i = 0; i < row; i++) {
                for (j = 0; j < col - 1; j++) {
                    for (int k = 0; k < col - j - 1; k++)
                        if (a[i][k] > a[i][k + 1]) {
                        temp = a[i][k];
                        a[i][k] = a[i][k + 1];
                        a[i][k + 1] = temp;
                    }
                }
            }
            printf("\nMa trận sau khi được sắp xếp: \n");
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;

        // Sắp xếp mảng có giá trị các phần tử theo cột giảm dần
        case 3:
            printf("\n");
            printf("\nMảng ban đầu: ");
            for ( i = 0; i < row; i++)
            {
                for ( j = 0; j < col; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for (j = 0; j < col; j++) {
                for (i = 0; i < row - 1; i++) {
                    for (k = 0; k < row - i - 1; k++) {
                        if (a[k][j] < a[k + 1][j]) {
                            temp = a[k][j];
                            a[k][j] = a[k + 1][j];
                            a[k + 1][j] = temp;
                        }
                    }
                }
            }
            printf("\nMa trận sau khi được sắp xếp: \n");
            for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++) {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;

        // Thoát
        case 4:
            return 0;
            break;                
        
        // Không có các lựa chọn trên
        default:
            printf("Không có lựa chọn này");
            break;
        }
    }
    system("pause");
}