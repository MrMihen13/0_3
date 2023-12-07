#include <iostream>

int task(int n) {
    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным числом" << std::endl;
        return 0.;
    }

    double* arr = new double[n];

    double c;

    std::cin >> c;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        double target = arr[i];
        if (target < c) count += 1;
    }
    delete[] arr;

    return count;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::cin >> n;
    int result = task(n);
    std::cout << result;
    return 0;
}
