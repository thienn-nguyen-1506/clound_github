#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int a = rand();
    int b = a % 10 + 5;  
    cout << "Số ngẫu nhiên thuộc đoạn [5;15] là: " << b << endl;
    cout << "Số lần bạn phải nhập số thuộc đoạn [100;10000] là: " << b << endl;

    const int max_attempt = 3;
    for (int i = 1; i <= b; i++) {
        int attempt = 0;
        int n;
        bool isvalid;

        do {
            cout << "Nhập số thứ " << i << ": ";
            cin >> n;
            isvalid = (n >= 100 && n <= 10000);

            if (!isvalid) {
                attempt++;
                cout << "Bạn đã nhập sai, vui lòng nhập lại." << endl;
                cout << "Số lần nhập hợp lệ còn lại: " << max_attempt - attempt << endl;
            }

            if (attempt >= max_attempt) {
                cout << "Bạn đã nhập quá số lần cho phép." << endl;
                return 0;  
            }
        } while (!isvalid);
    }

    cout << "Bạn đã hoàn thành số lần nhập." << endl;
    return 0;
}
