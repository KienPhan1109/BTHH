#include <stdio.h>

int main(){
    int n, i;
    printf("Nhập vào nguyên n: ");
    scanf("%d", &n);
    printf("Các ước của n\n");
    for ( i = 1 ; i <= n ; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        
    }
    printf("\n ");
}