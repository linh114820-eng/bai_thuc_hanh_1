#include <stdio.h>
int main() {
    int n, i;
    int laNguyenTo = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 2) {
        laNguyenTo = 0;
    } 
   else {
        for (i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                laNguyenTo = 0;
                break;
            }
        }
    }
    if (laNguyenTo == 1)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai la so nguyen to", n);
    return 0;
