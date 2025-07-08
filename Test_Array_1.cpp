#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[1000005]; // Giả sử N không vượt quá 1000005

    // Nhập mảng
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    // In các phần tử trong mảng
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
//Dưới đây là một số kiến thức cơ bản về cách sử dụng mảng (arr[]) trong lập trình C/C++:

// ---

// ## 1. Khái niệm về mảng

// - **Mảng (Array)** là một tập hợp các phần tử có cùng kiểu dữ liệu được lưu trữ liên tiếp trong bộ nhớ.  
// - Mỗi phần tử trong mảng có thể được truy cập thông qua chỉ số (index), bắt đầu từ 0 đến \( n-1 \) với \( n \) là số lượng phần tử.

// ---

// ## 2. Khai báo và khởi tạo mảng

// ### a. Khai báo mảng tĩnh
// - **Cú pháp:**  
//   ```cpp
//   kiểu_dữ_liệu tên_mảng[số_lượng_phần_tử];
//   ```
//   **Ví dụ:**
//   ```cpp
//   int arr[10];  // Mảng chứa 10 số nguyên
//   ```
  
// ### b. Khởi tạo mảng
// - Bạn có thể khởi tạo mảng khi khai báo:
//   ```cpp
//   int arr[5] = {1, 2, 3, 4, 5};
//   ```
// - Nếu không khởi tạo, các phần tử của mảng có thể chứa giá trị rác (nếu là biến cục bộ).

// ---

// ## 3. Truy cập và thao tác với mảng

// ### a. Truy cập phần tử
// - **Truy cập trực tiếp:**  
//   ```cpp
//   int x = arr[2];  // Lấy giá trị của phần tử thứ 3 (chỉ số 2)
//   ```
// - **Gán giá trị:**  
//   ```cpp
//   arr[0] = 10;  // Gán giá trị 10 cho phần tử đầu tiên
//   ```

// ### b. Duyệt mảng (ví dụ với vòng lặp for)
// - **Sử dụng vòng lặp for để duyệt mảng:**
//   ```cpp
//   for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//   }
//   ```
//   Trong đó, biến `i` là chỉ số của từng phần tử trong mảng.

// ---

// ## 4. Các thao tác cơ bản khác

// ### a. Tìm kiếm
// - Duyệt mảng để tìm kiếm một giá trị:
//   ```cpp
//   int key = 5;
//   bool found = false;
//   for (int i = 0; i < n; i++) {
//       if (arr[i] == key) {
//           found = true;
//           break;
//       }
//   }
//   ```

// ### b. Sắp xếp
// - Sử dụng các thuật toán sắp xếp như Bubble Sort, Selection Sort, hoặc sử dụng hàm `sort` của thư viện `<algorithm>`:
//   ```cpp
//   sort(arr, arr + n);
//   ```

// ### c. Cập nhật và xoá phần tử
// - **Cập nhật:** Thay đổi giá trị của phần tử tại vị trí nào đó.
// - **Xoá:** Trong mảng tĩnh, việc xoá phần tử thường được thực hiện bằng cách dịch chuyển các phần tử sau nó về phía trước.

// ---

// ## 5. Một số lưu ý khi làm việc với mảng

// - **Giới hạn chỉ số:**  
//   Chỉ số của mảng bắt đầu từ 0 đến \( n-1 \). Truy cập ngoài giới hạn này (ví dụ `arr[n]`) sẽ gây lỗi (Undefined Behavior).

// - **Bộ nhớ:**  
//   Mảng được cấp phát trên stack (đối với mảng tĩnh) hoặc heap (nếu dùng mảng động). Cần chú ý đến giới hạn bộ nhớ và giải phóng bộ nhớ nếu cấp phát động.

// - **Mảng đa chiều:**  
//   Bạn có thể khai báo mảng 2 chiều (ma trận) và các mảng đa chiều khác:
//   ```cpp
//   int matrix[3][4];  // Ma trận 3 hàng, 4 cột
//   ```

// - **Sử dụng STL:**  
//   Trong C++, bạn có thể sử dụng các cấu trúc dữ liệu như `std::vector` hoặc `std::array` để có thêm các thao tác tiện lợi (ví dụ: tự động thay đổi kích thước, phương thức member, v.v.).

// ---

// ## 6. Ví dụ minh họa

// Giả sử bạn muốn nhập một mảng gồm \( N \) số nguyên từ bàn phím và sau đó in ra các phần tử, bạn có thể làm như sau:

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int arr[1000005]; // Giả sử N không vượt quá 1000005

//     // Nhập mảng
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }
    
//     // In các phần tử trong mảng
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// ```

// ---

// ## 7. Flowchart cho đoạn mã nhập mảng

// Đoạn mã:
// ```cpp
// for (int i = 0; i < N; i++){
//     cin >> arr[i];
// }
// ```

// Flowchart có thể được mô tả như sau:

// ```mermaid
// flowchart TD
//     A[Start]
//     B[Khởi tạo i = 0]
//     C[Kiểm tra: i < N?]
//     D[Nhập giá trị vào arr[i]]
//     E[Tăng i lên: i = i + 1]
//     F[Quay lại kiểm tra điều kiện i < N]
//     G[Kết thúc vòng lặp]

//     A --> B
//     B --> C
//     C -- Yes --> D
//     D --> E
//     E --> C
//     C -- No --> G
// ```

// ---

// Những kiến thức cơ bản trên sẽ giúp bạn hiểu rõ cách khai báo, truy cập, và thao tác với mảng trong lập trình C/C++. Từ đó, bạn có thể xây dựng các chương trình phức tạp hơn dựa trên mảng. 