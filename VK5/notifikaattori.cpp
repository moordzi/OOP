#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja *seuraaja) {

    seuraaja->next = seuraajat;
    seuraajat = seuraaja;
    cout << "Notifikaattori lisää seuraajan: " << seuraaja->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *seuraaja) {
    Seuraaja *edellinen = nullptr;
    Seuraaja *nykyinen = seuraajat;

    while (nykyinen != nullptr) {
        if (nykyinen == seuraaja) {
            if (edellinen == nullptr) {
                seuraajat = nykyinen->next;
            } else {
                edellinen->next = nykyinen->next;
            }
            delete nykyinen;
            cout << "Notifikaattori poistaa seuraajan: " << seuraaja->getNimi() << endl;
            return;
        }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
    cout << "Seuraajaa ei löydy listasta" << endl;
}

void Notifikaattori::tulosta() {
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout << "Seuraaja: " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string v) {
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        alku->paivitys(v);
        alku = alku->next;
    }
}
