#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i, temp, j, min, luachon;
    
    // Nhập số phần tử vào mảng
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);
    printf("\n");
    int a[n];
    
    // Nhập các phần tử vào mảng
    for (int i = 0; i < n; i++)
    {
        printf("Phần tứ thứ %d: ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    // Lặp cho đến khi người dùng chọn thoát
    while (true)
    {

        // Hiển thị Menu
        printf("\nMENU\n");
        printf("\n1. In giá trị các phần tử trong mảng\n");
        printf("\n2. Sử dụng Insertion Sort sắp xếp mảng giảm dần và in ra\n");
        printf("\n3. Sử dụng Selection Sort sắp xếp mảng tăng dần và in ra\n");
        printf("\n4. Sử dụng Bubble Sort sắp xếp mảng giảm dần và in ra\n");
        printf("\n5. Thoát\n");
        printf("\nNhập vào lựa chọn của bạn: ");
        scanf("%d", &luachon);
        
        switch (luachon)
        {
        
        // In ra các giá trị trong mảng
        case 1:
            printf("\n");
            for ( i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        // Insertion Sort sắp xếp mảng giảm dần
        case 2:
            printf("\n");
            printf("\nMảng ban đầu: ");
            for ( i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            for ( i = 1; i < n; i++) {
                temp = a[i];
                j = i - 1;
                while (j >= 0 && a[j] < temp) {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j + 1] = temp;
            }
            printf("\n");
            printf("Mảng sau khi sắp xếp Insertion Sort: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        // Selection Sort sắp xếp mảng tăng dần
        case 3:
            printf("\n");
            printf("Mảng ban đầu: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            for (i = 0; i < n - 1; i++) {
                min = i;
                for (j = i + 1; j < n; j++) {
                    if (a[j] < a[min]) {
                        min = j;
                    }
                }
                temp = a[min];
                a[min] = a[i];
                a[i] = temp;
            }
            printf("\n");
            printf("Mảng sau khi sắp xếp bằng Selection Sort: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        // Bubble Sort sắp xếp mảng giảm dần
        case 4:
            printf("\n");
            printf("\nMảng ban đầu: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (a[j] < a[j + 1]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            printf("\n");
            printf("\nMảng sau khi sắp xếp bằng Bubble Sort: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        // Thoát
        case 5:
            return 0;
            break;                
        
        // Không có các lựa chọn trên
        default:
            printf("Không có lựa chọn này");
            break;
        }
    }
}