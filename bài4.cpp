#include <stdio.h>
#define PI 3.14

int main() {
    float r;
    printf("Nhap r: ");
    scanf("%f", &r);
    printf("Chu vi: %.2f\nDien tich: %.2f\n", 2 * PI * r, PI * r * r);
    return 0;
}
