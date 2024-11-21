#include <stdio.h>

int main() {
    // Khai báo các bi?n cho di?m môn Toán, Van, Anh
    float diemToan, diemVan, diemAnh;
    
    // Yêu c?u ngu?i dùng nh?p di?m
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    
    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);
    
    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);
    
    // Tính t?ng di?m và di?m trung bình
    float tongDiem = diemToan + diemVan + diemAnh;
    float diemTrungBinh = tongDiem / 3;
    
    // In k?t qu? ra màn hình
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}
