#include <iostream>

int task(double* arr, int n, int c) {
    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным числом" << std::endl;
        return 0.;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        double target = arr[i];
        if (target < c) count += 1;
    }

    return count;
}

void empty_array() {
    const int n = 0;
    double arr[1] = {};
    int result = task(arr, n, 1);

    if (result == 0.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void only_zeros() {
    const int n = 5;
    double arr[n] = { 0,0,0,0,0 };
    int result = task(arr, n, 2);

    if (result == 5.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void only_large() {
    const int n = 5;
    double arr[n] = { 1,2,3,4,5 };
    int result = task(arr, n, 0);

    if (result == 0.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void only_negative() {
    const int n = 5;
    double arr[n] = { -1,-2,-3,-4,-5 };
    int result = task(arr, n, 0);

    if (result == 5) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void negative_size() {
    const int n = -1;
    double arr[1] = { };
    int result = task(arr, n, 1);

    if (result == 0.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    empty_array();
    only_large();
    only_negative();
    negative_size(); 
    only_zeros();
    return 0;
}
