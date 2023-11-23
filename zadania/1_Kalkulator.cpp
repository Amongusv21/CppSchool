#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cin >> a;
    cin >> b;
    
    cout << endl;

    if(a <= 1024 && a >= -1024 && b >= -1024 && b <= 1024){
        cout << int(a+b) << " ";
        cout << int(a-b) << " ";
        cout << int(a*b) << " ";
        cout.precision(3);
        cout << static_cast<float>(a/b);
        cout << endl;
    }
    else{
        return 0;
    }
    return 0;
}
