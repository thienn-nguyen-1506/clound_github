#include <iostream>
using namespace std;
void solid_triangle (int h)
{
for(int i =1;i <= h;i++){
    for( int j=1;j <= (h-i); j ++){
        cout << " ";
    }
        for ( int k =1;k <=(2*i-1);k++ )
        {
            cout << "*";        }
    
    cout << endl;

}
    
 
}
void empty_triangle (int h)
{
   for(int i = 1; i <= h ; i++ ){
    if (1 == i){
        for ( int j = 1; j < h; j++ ){
            cout << " ";
        }
        cout << "*";
    }
     else if ( h == i ){
            for (int l = 1;l <= (2*h-1) ;l++){
                cout << "*";
            }
     }
        else {
            for (int z = 1; z <= (h - i );z++ ){
                cout << " ";
            }
            cout << "*";
            for ( int k = 1; k <= ( 2*i-3 ); k++ ){
                cout << " ";
            }
            cout << "*";
        }
        
        cout << endl;
   
    }
}
void is_right_triangle(int h)
{
    for (int i = 1; i <= h; i++){
        for (int j=1; j <= (2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
}
void is_hollow_right_triangle(int h)
{
    // phần đầu của tam giác
    cout << "*" << endl;
    // phần giữa của tam giác
    for (int i = 2; i < h; i++){
        cout << "*";
        int space = (i -1);
        for (int j = 1; j <= space ; j++){
            cout << " ";
        }
        cout << "*"<< endl;
    }
    // phần cuối của tam giác
    for (int i =1; i <= (h +1); i++) cout << "*";
    cout << endl;
    
}
int main()
{
    int h;
    cout << "nhập độ cao h của tam giác ";
    cin >> h;
    solid_triangle( h);
    empty_triangle( h );
    is_right_triangle(h);
    is_hollow_right_triangle(h);
    return 0;


}