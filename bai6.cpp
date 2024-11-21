#include <stdio.h>

int main() {
    float base, height, area;

    // Yeu cau nguoi dung nhap do dai canh day va chieu cao
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &base);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);

    // Tinh dien tich cua tam giac
    area = (base * height) / 2;

    // Hien thi ket qua
    printf("Dien tich cua tam giac la: %.2f\n", area);

    return 0;
}
