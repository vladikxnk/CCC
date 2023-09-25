#include <iostream>
#include <cmath>

int main() {
    int a = 1;
    double b = 15.15;

    double result = (1.3 * sin(a) + cos(b)) / (0.81 * sin(b) + 1.1 * cos(a)) * exp(log(b / a));

    std::cout << result;
    return 0;
}
