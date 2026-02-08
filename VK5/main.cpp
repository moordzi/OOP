#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main() {
    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beepeli");
    Seuraaja *C = new Seuraaja("Ceepeli");

    Notifikaattori *N = new Notifikaattori();


    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    cout << "Notifikaattorin seuraajat:" << endl;
    N->tulosta();


    N->postita("Tämä on viesti 1");


    N->poista(B);

    cout << "Notifikaattorin seuraajat (B poistettu):" << endl;
    N->tulosta();


    N->postita("Tämä on viesti 2");


    delete N;
    delete A;
    delete B;
    delete C;

    return 0;
}
