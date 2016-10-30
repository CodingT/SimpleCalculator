#include <iostream>

using namespace std;

int main()
{
    double a, b, result;
    char sighn;
    cout << "Please enter first number " << endl;
    cin >> a;
    cout << " Enter operation + - * / "<<  endl;
    cin >> sighn ;
    cout << " Enter second number " << endl;
    cin >> b;

    if ( sighn == '+') {cout << "Result is " << a+b << endl;}
    else if ( sighn == '-'){cout << "Result is " <<a-b << endl;}
    else if ( sighn == '*'){cout << "Result is " <<a*b << endl;}
    else if ( sighn == '/'){cout << "Result is " <<a/b << endl;}
    else cout << " ERROR "<< endl;

    return 0;
}
