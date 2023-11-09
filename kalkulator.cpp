#include <iostream>

using namespace std;

// Gwiazdki

int main()
{
    for (int x = 1; x < 4; x++)
    {
        int EmptySpaces = 3 - x;

        for (int y = 1; y < 4; y++)
        {
            if(y > EmptySpaces)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}