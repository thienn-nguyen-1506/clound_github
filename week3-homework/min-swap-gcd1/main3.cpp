#include <iostream>
using namespace std;
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;  
    }
    return a; 
}

int main() {
    int a, b;
    cout << "Nhap vao hai so a va b: ";
    cin >> a;
     cin >> b;

   
    int result = ucln(a, b);

   
    cout << "UCLN cua " << a << " va " << b << " la: " << result << endl;

    return 0;
}
