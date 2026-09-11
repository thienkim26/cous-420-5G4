#include <iostream>
using namespace std;

int main( ){
    char lettre;
    

    cout << "Entreée utilisateur : Caractere = ";
    cin >> lettre;

    int valeur = static_cast<int>(lettre);

    cout << "Sortie : Valeur ASCII de '" << lettre << "' = " << valeur << std::endl;
}