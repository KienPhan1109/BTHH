#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Nhập vào n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Giá trị nhập vào không hợp lệ.\n");
        return 1;
    }

    printf("Các số nguyên tố đầu tiên:\n");

    while (count < n) {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}