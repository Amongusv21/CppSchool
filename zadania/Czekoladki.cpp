#include <iostream>

using namespace std;

int W1, W2, K1, K2;

int main()
{
    cin >> W2;
    
    cin >> K2;
    
    cin >> W1;
    
    cin >> K1;
    
    
    if(W1 >= 1 && W2 >= 1 && K1 >= 1 && W1 >= 1
        && W1 <= 1000 && W2 <= 1000 && K1 <= 1000 && K2 <= 1000)
    {
        cout << W1*K1 + W2*K2;
        
        return 0;
    }
    else return 0;
}
