#include <iostream>
#include <cstdlib>  // для rand() и srand()
#include <ctime>    // для time()
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Инициализируем генератор случайных чисел
    srand(time(0));

    // Заполняем массив случайными числами от 1 до 100
    for(int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;  // числа от 1 до 100
    }

    // Показываем исходный массив
    cout << "Исходный массив: ";
    for(int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // СОРТИРОВКА ПО ВОЗРАСТАНИЮ
    for(int i = 0; i < SIZE; i++) {
        for(int j = i + 1; j < SIZE; j++) {
            if(numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Показываем отсортированный массив
    cout << "Отсортированный массив: ";
    for(int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}