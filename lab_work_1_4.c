#include <stdio.h>
#include <math.h>
int main () {
    float pi = 3.14;
    float radius;
    printf ("Nhap ban kinh ban muon: ");
    scanf ("%f", &radius);
    float area = pi * pow(radius, 2);
    float circumference = 2 * pi * radius;
    printf ("Dien tich hinh tron la: %.1f\nChu vi hinh tron la: %.1f", area, circumference);
    return 0;
}
