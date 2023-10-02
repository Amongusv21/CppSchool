#include <iostream>

using namespace std;


string imie;

class KalkulatorekTaki
{
    public:
    
    float Dodawanie(){
        return 1;
    }
    float P_Prostokat(float Bok1, float Bok2){
        return Bok1 * Bok2;
    }
    
};



int main()
{
    cout << "Imie I nazwisko" << endl;
    cin >> imie;
    cout << "Nie podawaj swoich danych osobowych w internecie" << endl;
    return 0;
}
