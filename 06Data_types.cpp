#include <iostream>
using namespace std;

int c = 67;
int main()
{
    //--Build in data types--
    // int a,b,c;
    // cout<< "Enter the value of a:" << endl;
    // cin>>a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is "<< c<<endl;
    // cout<<"The global c is "<<::c;

    //-- float,double and long double literals
    float d = 34.4;
    long double e = 34.4;
    cout << "The value of d is " << d << endl
         << "The value of e is " << e << endl;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    return 0;
}