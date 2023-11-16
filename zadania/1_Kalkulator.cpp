#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cin >> a;
    cout << " ";
    cin >> b;
    cout << endl;
    if(a <= 1024 && a >= -1024 && b >= -1024 && b <= 1024){
        cout << int(a+b) << " ";
        cout << int(a-b) << " ";
        cout << int(a*b) << " ";
        cout << a/b;
    }
    else{
        return 0;
    }

    cout << "dziala" << endl;
    return 0;
}
