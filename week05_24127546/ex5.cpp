#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào một số nguyên ";
    cin >> n;
    cout << "danh sách những số nguyên dương lẻ bé hơn " << n << " là " << endl;
    for(int i = 1;i < n ;i++){
        if ( 1 == ( i % 2 ) ){
            cout << i << endl;
        }
    }
    return 0;
}