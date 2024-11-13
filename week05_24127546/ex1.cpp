#include <iostream>
#include <string>
using namespace std;
void input( string massage,int& n)
{
    cout << massage;
    cin >> n;
}
void tìm_ước_chung_lớn_nhất( int& a ,int& b )
{   
        for ( int i = b; i > 1; i--)
        if ( ( a % i == 0) && ( b % i == 0) )
        {
            cout << "ước chung lớn nhất của hai số a,b là: " << i << endl;
            break;
        }
}
void tìm_bội_chung_nhỏ_nhất( int& a,int& b)
{
    for ( int i = b ; i > 1 ; i++ )
    {
        if ( ( i % a == 0 ) && ( i % b == 0 ) )
        {
            cout << "bội chung nhỏ nhất của hai số a , b là: " << i << endl;
            break;
        }
    }
}
int main()
{
    int a;
    int b;
    input( "nhập vào số nguyên a: ", a );
    input( "nhập vào số nguyên b: ", b );
    tìm_ước_chung_lớn_nhất( a ,b );
    tìm_bội_chung_nhỏ_nhất( a ,b );
    return 0;
}