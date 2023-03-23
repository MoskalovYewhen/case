#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "podaj 1, 2, lub 3: ";
    cin >> a;
    switch (a) {
        case 1:
         cout << "piersza liczba jest 18";
         break;

        case 2:
            cout << "druga liczba jest -12";
            break;
        case 3:
            cout << "tresc liczba jest 0";
            break;
        default:
            cout << "liczba powyna być 1 do 3";


    }
    return 0;
}
