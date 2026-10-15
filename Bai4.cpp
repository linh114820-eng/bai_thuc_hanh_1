#include <stdio.h>

int main() {

    int n1, n2, i, bc, ucln = 1;

    printf("Nhap vao hai so nguyen duong: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        if (n1 % i == 0 && n2 % i == 0)
            ucln = i;
    }

    bc = (n1 / ucln) * n2;

    printf("Boi chung nho nhat cua %d va %d la %d.", n1, n2, bc);
    return 0;
}