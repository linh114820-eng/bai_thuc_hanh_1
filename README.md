# bai_thuc_hanh_1_ Chuyển mã nguồn thành sơ đồ khối 
bài tập thực hành chương 1 
# Bài 01: 

## 1. Đề bài
Vẽ sơ đồ khối thuật toán giải phương trình ax^2 + bx + c = 0
## 2. Phân tích bài toán 

### Input : 
-  nhập a,b ,c 
### output:
- kết quả giải phương trình bậc hai
Phương trình:   ax^2+bx+c=0
## 3. Ý tưởng thuật toán 
Ý tưởng: nhập (a,b,c), sau đó xét trường hợp (a=0) hay (a khác 0).
Nếu a = 0, xét pt bậc nhất bx + c = 0.
Nếu a khác 0, tính biểu thức delta : b^2 - 4*a*c.
                    +/ delta  = 0: ngiệm kép x = -b/ (2a)
                    +/ delta > 0 : hai nghiệm phân biệt 
                    +/ delta < 0: không có nghiệm 
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
 ### Độ phức tạp thời gian
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
# Bài 3
## 1. Đề bài :

Vẽ sơ đồ khối giải thuật tìm số lớn nhất trong mảng số nguyên . Đánh giá giải thuật sử dụng

## 2.Phân tích bài toán 

### Input:
- Số lượng phần tử n và các phần tử nguyên A[0], A[1],.., A[n-1].
### Output:
- Giá trị lớn nhất trong mảng.
## 3. Ý tưởng thuật toán 
  ### Các bước thực hiện:
1. Nhập số lượng phần tử n.
2. Nhập n phần tử của mảng.
3. Gán phần tử đầu tiên A[0] làm số lớn nhất ban đầu.
4. Duyệt các phần tử còn lại từ vị trí i = 1 đến i = n - 1.
5. Nếu A[i] > max, cập nhật max = A[i].
6. Sau khi duyệt hết mảng, in ra ma
## 4. Đánh giá độ phức tạp
### Độ phức tạp thời gian
Thuật toán duyệt qua các phần tử của mảng một lần.

- Độ phức tạp: O(n).
- Chính xác hơn, thời gian tìm kiếm là Theta(n).

### Độ phức tạp không gian

- Mảng lưu n phần tử: O(n).
- Bộ nhớ phụ ngoài mảng: O(1).

## 5. Kết luận

Thuật toán tìm số lớn nhất bằng cách duyệt lần lượt 
các phần tử và cập nhật giá trị max khi tìm thấy phần
tử lớn hơn.

Đây là phương pháp đơn giản, dễ cài đặt và có độ
phức tạp thời gian tuyến tính O(n).

# Bài 4

# Bài thực hành: Tìm BCNN trong mảng số nguyên

## 1. Đề bài

Vẽ sơ đồ khối giải thuật tìm bội chung nhỏ nhất
(BCNN) trong mảng số nguyên. Đánh giá giải thuật sử dụng.

## 2. Phân tích bài toán 

- Input:
  - Số lượng phần tử n.
  - n số nguyên trong mảng A.
- Output: BCNN của các phần tử trong mảng.

Quy ước: n phải lớn hơn 0. Nếu có phần tử bằng 0,
BCNN của mảng được quy ước bằng 0.

## 3. Ý tưởng giải thuật
- Bước 1 (Đầu vào): Nhận mảng gồm N số nguyên dương a1, a2,... , aN
- Bước 2 (Khởi tạo): Đặt biến kết quả tích lũy ban đầu BC = a1.
- Bước 3 (Vòng lặp duyệt mảng): Cho chỉ số i chạy từ phần tử thứ 2 (i = 2) đến phần tử cuối cùng (i = N):
  			Tính ƯSCLN của BC và ai bằng thuật toán chia dư Euclid.
  			Công thức: BC = ( BC * ai) / UCLN(BC,ai) 
.Bước 4 (Đầu ra): Sau khi xét hết phần tử thứ N, in giá trị BC ra màn hình và kết thúc.

## 4. Đánh giá độ phức tạp
- Thời gian: O(n log M).
- Không gian kể cả mảng: O(n).
- Bộ nhớ phụ ngoài mảng: O(1).

## 5. Kết luận
Giải thuật sử dụng thuật toán Euclid để tìm UCLN,
sau đó tính BCNN lần lượt với từng phần tử.

