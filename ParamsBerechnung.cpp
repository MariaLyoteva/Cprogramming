#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    // Parameter der Funktion
    double params[] = {0.3, 0.13, 0.17, 0.96};

    // Vektoren für x-Werte und Funktionswerte
    vector<double> x_values;
    vector<double> f_values;

    // Schleife für x-Werte zwischen 0 und 1 in 0.025 Schritten
    for (double x = 0; x <= 1; x += 0.025) {
        // Berechnung des Funktionswertes für x
        double f_x = params[0] * sin(x * params[1] + params[2]) + params[3] * pow(x, 2) + exp(x);

        // Speichern von x und f(x) in den Vektoren
        x_values.push_back(x);
        f_values.push_back(f_x);
    }

    // Ausgabe der x-Werte und Funktionswerte
    for (int i = 0; i < x_values.size(); i++) {
        cout << "f(" << x_values.at(i) << ") = " << f_values.at(i) << endl;
    }

    return 0;
}
