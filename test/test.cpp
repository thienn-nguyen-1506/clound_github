#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// hàm kiểm tra số toàn lẻ
bool check_number_all_odd(int n);

//Hàm tính tổng các chữ số của một số
int sum_of_digits(int n);

// Hàm kiểm tra các chữ số của một số có tăng dần từ trái sang phải không
bool check_digits_increasing(int n);


//hàm main
int main() {
    srand(time(0));  // Khởi tạo bộ sinh số ngẫu nhiên với thời gian hiện tại

    // Sinh số ngẫu nhiên trong khoảng [8; 25]
    int n = rand() % 17 + 8;
    cout << "Số ngẫu nhiên trong khoảng [8; 25] là: " << n << endl;

    int MaxInput = 4;   // Số lần nhập tối đa
    int NumberInput = 0;  // Số lần nhập sai

    // Lặp để nhập n số
    for (int i = 1; i <= n; i++) {
        long long currentNumber;  // Biến lưu số người dùng nhập
        bool Enter_correctly = false;
        

        // Lặp lại yêu cầu nhập cho đến khi người dùng nhập đúng
        while (!Enter_correctly) {
            cout << "nhập số thứ nhất " << i << ": ";
            cin >> currentNumber;
            
            // Kiểm tra xem số nhập vào có nằm trong khoảng [1000, 2000000000]
            Enter_correctly = (1000 <= currentNumber && currentNumber <= 2000000000);

            if (!Enter_correctly) {
                NumberInput++;
                cout << "Vui lòng nhập số trong khoảng [1000; 2000000000]." << endl;
                cout << "Bạn đã nhập sai " << NumberInput << " lần." << endl;

                if (NumberInput > MaxInput) {
                    cout << "Bạn đã nhập quá số lần quy định. Chương trình kết thúc." << endl;
                    return 0;  // Kết thúc chương trình khi nhập sai quá nhiều lần
                }
            }


      if (Enter_correctly){
            // kiểm tra xem có phải là số có chữ số toàn lẻ
            int isnumberallodd =check_number_all_odd(currentNumber);
            if(isnumberallodd){
                cout << "đây là số toàn lẻ" << endl;
            }
            else{
                cout << "đây không phải là số toàn lẻ" << endl;
            }


            // Kiểm tra xem tổng các chữ số của số vừa nhập > 20 hay không
            if (sum_of_digits(currentNumber) > 20) {
            cout << "Số " << currentNumber<< " có tổng các chữ số > 20." << endl;
             } else {
            cout << "Số " << currentNumber << " không có tổng các chữ số > 20." << endl;
            }

            //kiểm tra xem số vừa nhập có các chữ số xếp theo thứ tự tăng dần hay không
            if (check_digits_increasing(currentNumber)) {
            cout << "Các chữ số của " << currentNumber << " tăng dần từ trái sang phải!" << endl;
         } else {
        cout << "Các chữ số của " << currentNumber << " không tăng dần từ trái sang phải!" << endl;
    }
      }


        }
    }

    return 0;
}

bool check_number_all_odd(int n)
{
    while( n > 0){
        int digit = n % 10;
        if ( digit  % 2 == 0)
        {
            return false;
            break;
        }
        n = n/10;
    }
    return true;
}

int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Lấy chữ số cuối và cộng vào tổng
        n = n / 10;  // Loại bỏ chữ số cuối
    }
    return sum;

}

bool check_digits_increasing(int n)
{

    int previous_digit = 10;  // Khởi tạo giá trị lớn hơn bất kỳ chữ số nào (chữ số lớn nhất là 9)
    
    while (n > 0) {
        int current_digit = n % 10;  // Lấy chữ số cuối
        if (current_digit >= previous_digit) {  // Nếu chữ số hiện tại không nhỏ hơn chữ số trước
            return false;
        }
        previous_digit = current_digit;  // Cập nhật chữ số trước để so sánh với chữ số tiếp theo
        n = n / 10;  // Loại bỏ chữ số cuối
    }
    return true;  // Nếu tất cả chữ số đều tăng dần, trả về true
}