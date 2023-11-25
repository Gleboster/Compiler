#include "gtest/gtest.h"

class CustomArray {
private:
    int arr[10]; // пример массива из 10 элементов

public:
    int& operator[](int index) {
        if (index < 0 || index >= 10) {
            std::cout << "Ошибка: индекс за пределами массива" << std::endl;
            return arr[0];
        }
        return arr[index];
    }
};

TEST(GetSetSuite, GetisSet){
    CustomArray myArray;

    myArray[0] = 5; // Установка значения элемента массива
    std::cout << myArray[0] << std::endl; // Вывод значения элемента массива
    ASSERT_EQ(myArray[0], 5);
}
