#include <iostream>
#include <math.h>
using namespace std;
bool is_prime( int n )
{
    if ( 1 == n ) return false;
    for ( int i =2; i < n;i ++ ){
        if ( 0 == n % i) 
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "nhập vào số nguyên n: ";
    cin >> n;
    cout << " danh sách số nguyên tố nhỏ hơn n " << endl;
    for ( int i = 2;i<n;i++){
        if ( is_prime(i) )
        {
            cout << i << endl;
        }
    }
    return 0;
}
