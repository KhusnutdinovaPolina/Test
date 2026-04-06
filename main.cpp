#include <iostream>
using namespace std;

int main() {
    // Задаём массив из 5 чисел
    int numbers[5] = {45, 12, 78, 3, 56};

    // Показываем исходный массив
    cout << "Исходный массив: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // СОРТИРОВКА ПО ВОЗРАСТАНИЮ
    // Сравниваем каждое число с каждым
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            // Если число слева больше числа справа - меняем их местами
            if(numbers[i] > numbers[j]) {
                // Меняем местами
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Показываем отсортированный массив
    cout << "Отсортированный массив: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}