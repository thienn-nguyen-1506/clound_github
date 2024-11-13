#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào số mà bạn muốn kiêm tra: ";
    cin >> n;
    int attempt = n;
    while( n != 1){
       
        if ( 1 == (n % 2 ) )
        {
            cout << attempt << " không phải là số có dạng 2^k" << endl;
            return 0;
        }
        n = n/2;
    }
    cout << attempt << " là số có dạng 2^k " << endl;
    return 0;
}