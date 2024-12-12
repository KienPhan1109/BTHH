#include <stdio.h>

int main(){
    float giolam, luonggio, luongcb, phucap;
    printf("Nhập vào số giờ làm: ");
    scanf("%f", &giolam);
    printf("Nhập vào lương theo giờ: ");
    scanf("%f", &luonggio);
    luongcb = giolam * luonggio;
    if (giolam > 160)
    {
        phucap = (giolam * luonggio) * 0.1;
    }
    printf("Tiền lương cơ bản: %.2f\n", luongcb);
    printf("Tiền phụ cấp: %.2f\n", phucap);
    printf("Tổng tiền nhận được: %.2f\n", luongcb + phucap);
}