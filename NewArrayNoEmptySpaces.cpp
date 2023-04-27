#include <iostream>

int main() {
    int arr[] = {5,8,23,10,30,503,20,10,10};
    int size = sizeof(arr) / sizeof(int);

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 5 == 0) {
            count++;
        }
    }

    int* multiplesOfFive = new int[count];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 5 == 0) {
            multiplesOfFive[index] = arr[i];
            index++;
        }
    }

    // Ausgabe des neuen Arrays
    std::cout << "Neues Array: ";
    for (int i = 0; i < count; i++) {
        std::cout << multiplesOfFive[i] << " ";
    }
    std::cout << std::endl;

    // Speicher freigeben
    delete[] multiplesOfFive;

    return 0;
}
