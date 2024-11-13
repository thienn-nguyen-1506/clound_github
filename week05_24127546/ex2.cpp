#include <iostream>
#include <cmath>
using namespace std;

void solveQuartic(double a, double b, double c) {
    if (a == 0) {
        cout << "Đây không phải là phương trình bậc 4." << endl;
        return;
    }

    // Đặt y = x^2, phương trình trở thành ay^2 + by + c = 0
    double delta = b * b - 4 * a * c;
    bool hasRealSolution = false;

    // Giải phương trình bậc 2 ay^2 + by + c = 0
    if (delta > 0) {
        double y1 = (-b + sqrt(delta)) / (2 * a);
        double y2 = (-b - sqrt(delta)) / (2 * a);

        // Tìm nghiệm x từ y1 và y2
        if (y1 >= 0) {
            cout << "Nghiệm x1 = " << sqrt(y1) << endl;
            cout << "Nghiệm x2 = " << -sqrt(y1) << endl;
            hasRealSolution = true;
        }

        if (y2 >= 0) {
            cout << "Nghiệm x3 = " << sqrt(y2) << endl;
            cout << "Nghiệm x4 = " << -sqrt(y2) << endl;
            hasRealSolution = true;
        }
    } else if (delta == 0) {
        double y = -b / (2 * a);

        if (y >= 0) {
            cout << "Nghiệm kép x1 = " << sqrt(y) << endl;
            cout << "Nghiệm kép x2 = " << -sqrt(y) << endl;
            hasRealSolution = true;
        }
    }

    // Kiểm tra nếu không có nghiệm thực
    if (!hasRealSolution) {
        cout << "Phương trình vô nghiệm trong tập số thực." << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Nhập hệ số a, b, c cho phương trình ax^4 + bx^2 + c = 0: ";
    cin >> a >> b >> c;

    solveQuartic(a, b, c);

    return 0;
}
