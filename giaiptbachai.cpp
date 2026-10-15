
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    double x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // Neu a = 0, phuong trinh tro thanh bac nhat
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        } else {
            printf("Phuong trinh co 1 nghiem: x = %.2lf", -c / b);
        }
    } else {
        // Tinh delta
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem thuc");
        } else if (delta == 0) {
            // Nghiem kep
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf", x1);
        } else {
            // Hai nghiem phan biet
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}
