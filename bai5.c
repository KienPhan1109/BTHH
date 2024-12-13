#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    printf("Nhập vào n: "); scanf("%d", &n);
    if (n <= 1){
        printf("%d không phải là số nguyên tố", n);
        return 0;
    }
    for (i = 2 ; i * i <= n ; i++){
        if (n % i == 0){
            printf("%d không phải là số nguyên tố", n);
            return 0;
        }
    }
    printf("%d là số nguyên tố", n);
}