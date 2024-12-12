#include <stdio.h>

int main(){
    int luachon;
    float chuyendoi, tien;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhập đơn vị tiền tệ bạn muốn chuyển đổi (1-8)?: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
    case 1:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien * 23.500;
        break;
    case 2:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien * 25.000;
        break;   
    case 3:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien * 28.000;
        break;
    case 4:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien * 180;
        break;
    case 5:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien / 23.500;
        break;
    case 6:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien / 25.000;
        break;
    case 7:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien / 28.000;
        break;
    case 8:
        printf("Nhập vào số tiền cần chuyển đổi: ");
        scanf("%f", &tien);
        chuyendoi = tien / 180;
        break;     
    default:
        printf("Lựa chọn không hợp lệ!!");
        return 0;
    }
    printf("Số tiền sau khi chuyển đổi là: %.2f", chuyendoi);
}