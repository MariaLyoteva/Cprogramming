#include <iostream>

int main() {
    int n;
    std::cout << "Bitte geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> n;

    int i = 1;
    while (i <= n) {
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
