#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh;
    
    printf("Nhap diem Toan: ");
    
    scanf("%f", &diemToan);
    
    printf("Nhap diem Van: ");
    
    scanf("%f", &diemVan);
    
    printf("Nhap diem Anh: ");
    
    scanf("%f", &diemAnh);
    
    float tongDiem = diemToan + diemVan + diemAnh;
    
    float diemTrungBinh = tongDiem / 3;
    
    printf("Tong diem: %.2f\n", tongDiem);
    
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}
