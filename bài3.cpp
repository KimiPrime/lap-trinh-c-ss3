#include <stdio.h>

int main() {
    float r, pi = 3.14159; 
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    
    float perimeter = 2 * pi * r;   
    float area = pi * r * r;        
    
    printf("Hinh tron co chu vi %.2f va dien tich %.2f\n", perimeter, area);
    
    return 0;
}
