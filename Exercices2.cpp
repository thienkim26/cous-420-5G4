#include <iostream>
using namespace std;

int main( ){
    int choix;
    double C, F;

    cout << "=== COnvertisseur de température ===" << endl;
    cout << "Choisissez une option : " << endl;
    cout << "1. Celsius vers Fahrenheit " << endl;
    cout << "2. Fahrenheit vers Celsius " << endl;

    cout << "Votre choix : " ;
    cin >> choix;

    if ( choix == 1){
        cout << "Entrez la température en Celsius : " ;
        cin >> C;
        F = (C * 1.8 + 32);
        
        cout << C << "°C = " << F << "°F" << std::endl;
    } else {
        cout << "Entrez la température en Fahrenheit : " ;
        cin >> F;
        C = ((F - 32) / 1.8);

        cout << F << "°F = " << C << "°C" << std::endl;
    }

    return 0;
}