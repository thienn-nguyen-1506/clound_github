#include <iostream>
#include <string>
using namespace std;
void input(string prompt ,int& w)
{
    cout << prompt;
    cin >> w;
}
void is_solid_rectangle(int w,int h)
{
    for (int i =1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void is_hollow_rectangle(int w,int h)
{
    //phần đầu của hcn
    for (int i =1; i <= w; i++) cout << "*";
    cout << endl;
    //phần giữa của hcn
    for (int i =1; i <= (h-2); i++){
        cout << "*";
        for (int j = 1; j <= (w-2); j++) cout << " ";
        cout << "*" << endl;
    }
    //phần cuối của hcb
     for (int i =1; i <= w; i++) cout << "*";
     cout << endl;

}
int main()
{
    int w;
    int h;
    input("nhập vào cạnh thứ nhất của hcn ",w);
    input("nhập vào cạnh thứ hai của hcn ",h);
    is_solid_rectangle(w,h);
    is_hollow_rectangle(w,h);
    return 0;

}
