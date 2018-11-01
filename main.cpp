#include <iostream>
#include <cmath>
int main() {
    double i = 10.3, t = 3.3, phi = 3.5, res;
    res = pow(M_E, (-i)*t*(sqrt(phi))+phi*pow(M_E, ((sqrt(phi)/i*t))));
    std::cout << res << '\n';
    return 0;
}