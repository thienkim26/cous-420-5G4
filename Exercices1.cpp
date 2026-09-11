#include <iostream>
using namespace std;

int main( ){
    /*int a = 10, b = 21, c = 4;

    if (a >= b){
        if(a >= c){
            cout << a;
        } else cout << c;
    } else {
        if ( b >= c ) {
            cout << b;
        } else {
            cout << c;
        }
    } */


    string inputA = "a", inputB = "b", inputC = "c";
    int nb1, nb2, nb3;

    cout << "Entrée utilisateur : a = " ;
    cin >> nb1;

    cout << ", b = " ;
    cin >> nb2;

    cout << " et c = " ;
    cin >> nb3;

    if (nb1 >= nb2){
        if (nb1 >= nb3){
            cout << "Sortie : " << inputA << " est le plus grand." << endl;
        } else {
            cout << "Sortie : " << inputC << " est le plus grand." << endl;
        }
    } else {
        if (nb2 >= nb3){
            cout << "Sortie : " << inputB << " est le plus grand." << endl;
        } else {
            cout << "Sortie : " << inputC << " est le plus grand." << endl;
        }
    }

    return 0;
}

