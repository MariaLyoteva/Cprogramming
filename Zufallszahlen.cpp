#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int ARRAY_SIZE = 20;
    int zufallszahlen[ARRAY_SIZE];

    // Zufallszahlengenerator initialisieren
    srand(time(nullptr));

    // Array mit Zufallszahlen befüllen
    for (int i = 0; i < ARRAY_SIZE; i++) {
        zufallszahlen[i] = rand() % 101; // Zufallszahl zwischen 0 und 100
    }

    // Array ausgeben
    cout << "Alle Zufallszahlen: ";
    int i = 0;
    while (i < ARRAY_SIZE) {
        cout << zufallszahlen[i] << " ";
        i++;
    }
    cout << endl;

    // Durchschnitt berechnen
    int summe = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        summe += zufallszahlen[i];
    }
    double durchschnitt = static_cast<double>(summe) / ARRAY_SIZE;

    // Durchschnitt ausgeben
    cout << "Durchschnitt: " << durchschnitt << endl;

    // Gerade Zufallszahlen ausgeben
    cout << "Gerade Zufallszahlen: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (zufallszahlen[i] % 2 == 0) {
            cout << zufallszahlen[i] << " ";
        }
    }
    cout << endl;

    // Ungerade Zufallszahlen ausgeben
    cout << "Ungerade Zufallszahlen: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (zufallszahlen[i] % 2 != 0) {
            cout << zufallszahlen[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
