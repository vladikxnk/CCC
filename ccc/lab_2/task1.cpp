#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x; 
    double e; 
    double w; 

    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter e value: ";
    cin >> e;

    if (x >= 0) {
    
    w = cos(x) - pow(sin(x), 3);
    }
    else if (x < 0) {
    
    w = pow(x * e, -x) + (1 / x - 1.3);
    }

    cout << "Result: " << w << endl; 
    return 0;
}