#include <stdio.h>
#include <math.h>
int main () {
    int a = 1;
    int b = 2;
    int c = 1; 
    float x;
    printf ("Nhap gia tri cua x ma ban muon: ");
    scanf ("%f", &x);
    float ham = a * pow(x,2) + b * x + c;
    printf ("Gia tri cua ham so la: %.1f", ham);
    return 0;
}