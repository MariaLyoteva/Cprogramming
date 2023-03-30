#include <iostream>

int main() {
    int numLines;
    std::cout << "Bitte geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> numLines;

    int i = 1;
    while (i <= numLines) {
        int j = 1;
        while (j <= i) {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}
