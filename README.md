# bai_thuc_hanh_1_ Chuyển mã nguồn thành sơ đồ khối 
bài tập thực hành chương 1 
# Bài 01: 

## 1. Đề bài
Vẽ sơ đồ khối thuật toán giải phương trình ax^2 + bx + c = 0
## 2. Ý tưởng thuật toán
Phương trình:   ax^2+bx+c=0

Ý tưởng: nhập (a,b,c), sau đó xét trường hợp (a=0) hay (a khác 0).
Nếu a = 0, xét pt bậc nhất bx + c = 0.
Nếu a khác 0, tính biểu thức delta : b^2 - 4*a*c.
                    +/ delta  = 0: ngiệm kép x = -b/ (2a)
                    +/ delta > 0 : hai nghiệm phân biệt 
                    +/ delta < 0: không có nghiệm 

### Input : 
-  nhập a,b ,c 
### output:
- kết quả giải phương trình bậc hai
## code 
#include<stdio.h> 
#include<math.h> 
int main(){ 
 	float a, b, c; 
	float x1, x2; 
	scanf("%f%f%f", &a, &b, &c); 
 	if(a != 0){ 
  		float delta = b*b-4*a*c; 
  		if(delta < 0) printf("\nVô nghiệm"); 
  		else if(delta == 0)
      { 
  			 x1 = x2 = -b/(2*a); 
  			 printf("%f", x1); 
  	  } 
 	     else{ 
  		 x1 = (-b-sqrt(delta))/(2*a); 
  		 x2 = (-b+sqrt(delta))/(2*a); 
  		 if(x1 < x2) printf("%f %f", x1, x2); 
  		 else printf("%f %f", x2, x1); 
  	}
  }
 	else{ 
 		 if(b != 0){ 
  			 x1 = -c/b; 
  			 printf("%f", x1); 
  		} 
  		else{ 
   			if(c != 0) printf("Vô nghiệm"); 
  			 else printf("Vô số nghiệm"); 
 		} 
	} 
}
# Bài 02 
## 1. Đề bài 

Vẽ sơ đồ khối giải thuật kiểm tra một số nguyên dương có phải là số nguyên tố không. Đánh giá độ phức tạp của giải thuật sử dụng.

## 2. Phân tích bài toán

Số nguyên tố là số nguyên dương lớn hơn 1 và chỉ có đúng hai ước số dương là 1 và chính nó.

### Input
- Nhập số nguyên dương n.

### Output
- Thông báo n số nguyên tố hoặc không phải số nguyên tố.

## 3. Ý tưởng thuật toán

1. Nhập số nguyên n.
2. Nếu n < 2, kết luận n không phải số nguyên tố.
3. Ngược lại, gán i = 2.
4. Trong khi i * i <= n:
   - Nếu n % i == 0, kết luận n không phải số nguyên tố và kết thúc.
   - Nếu không chia hết, tăng i lên 1.
5. Nếu vòng lặp kết thúc mà không tìm thấy ước nào, kết luận n là số nguyên tố.
(Chỉ cần kiểm tra các ước từ 2 đến căn bậc hai của n, vì nếu n là hợp số thì luôn tồn tại một ước không vượt quá căn bậc hai của nó.)

## 4. Đánh giá độ phức tạp
 ## Độ phức tạp thời gian
Vòng lặp chỉ kiểm tra các giá trị từ 2 đến căn bậc hai của n.
- Trường hợp tốt nhất: O(1).
- Trường hợp xấu nhất: O(√n).

### Độ phức tạp bộ nhớ

Chương trình chỉ sử dụng một số biến đơn giản, không dùng mảng hoặc cấu trúc dữ liệu phụ thuộc vào n.
* Thuật toán chỉ sử dụng một số lượng hằng số các ô nhớ cho các biến đơn lẻ: N, count, i.
* Thuật toán không sử dụng mảng phụ, danh sách động hay gọi đệ quy chiếm dụng stack bộ nhớ.
Vậy độ phức tạp bộ nhớ phụ trợ là O(1).

## 5. Kết luận

Thuật toán kiểm tra số nguyên tố bằng cách thử các ước từ 2 đến căn bậc hai của n. Cách làm này giảm số lần kiểm tra so với việc thử tất cả các số từ 2 đến "n - 1".

- Độ phức tạp thời gian xấu nhất: O(√n).
- Độ phức tạp bộ nhớ phụ trợ: O(1).

## code 

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
