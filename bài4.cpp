#include <stdio.h>

int main() {
    // Khai b�o c�c bi?n cho di?m m�n To�n, Van, Anh
    float diemToan, diemVan, diemAnh;
    
    // Y�u c?u ngu?i d�ng nh?p di?m
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    
    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);
    
    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);
    
    // T�nh t?ng di?m v� di?m trung b�nh
    float tongDiem = diemToan + diemVan + diemAnh;
    float diemTrungBinh = tongDiem / 3;
    
    // In k?t qu? ra m�n h�nh
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}
