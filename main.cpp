#include <iostream>
#include <cmath>
int main() {
    int a = 509321;
    int b = a%10;
    int c = a%100/10;
    int d = a%1000/100;
    int e = a%10000/1000;
    int k = a%100000/10000;
    int h = a/100000;
    std::cout << b << '|' << c << '|' << d << '|' << e << '|' << k << '|' << h << '|' << '\n';
    return 0;
}