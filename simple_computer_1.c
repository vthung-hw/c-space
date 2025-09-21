#include<stdio.h>
#include<float.h>
int main () {
    float a;
    float b;
    char dau;
    float kq;
    printf ("Nhap dau ma ban muon + - * / ");
    scanf("%c", &dau);
    printf ("Nhap 2 so ma ban muon: ");
    scanf ("%f%f", &a, &b);
    if (dau == '+')
        kq = a + b;
    else if (dau == '-')
        kq = a - b;
    else if (dau == '*')
        kq = a * b;
    else if (dau == '/')
        kq = a / b;
    else {
        printf("Syntax Error! Try Again");
        kq = -DBL_MAX;
    }
    if (kq != -DBL_MAX)
        printf("Ket qua cua phep tinh tren la: %.2f", kq);
    
}