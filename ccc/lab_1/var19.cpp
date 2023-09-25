#include <iostream>
#include <cmath>

int main() {
    int a = 4;
    double b = 0.707;

    double result = exp(pow(0.5*(1-cos(b*M_PI)/(1-sin(a*M_PI))), 3.0/2.0)) + exp(pow(0.3*(1+cos(a*M_PI)/(1+cos(b*M_PI))), 3.0/2.0));

    std::cout << result;
    return 0;
}
