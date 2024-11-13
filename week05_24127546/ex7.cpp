#include <iostream>
#include <string>
using namespace std;
void lay_phan_tram(int& n)
{
     n = n/100;
}
void lay_phan_chuc(int& n)
{
    n=n/10;
    n=n%10;
    
}
void lay_phan_don_vi(int& n)
{
    n=n%10;
}

int main()
{   
    int n;
    cout << " nhập vào một số nguyên có ba chữ số ";
    cin >> n;
    int phan_tram = n;
    lay_phan_tram(phan_tram);
    int phan_chuc = n;
    lay_phan_chuc(phan_chuc);
    int phan_don_vi = n;
    lay_phan_don_vi(phan_don_vi);
    cout << "cách đọc của số " << n << " là" << endl;
    cout << phan_tram << " trăm " << phan_chuc << " mươi " << phan_don_vi << endl;

    return 0;


}