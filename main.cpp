#include <iostream>
#include <cmath>
int main() {
    int a = 509321;
    int v = a%10;
    int c = a%100/10;
    int d = a%1000/100;
    int e = a%10000/1000;
    int k = a%100000/10000;
    int h = a/100000;
    std::cout << v << '|' << c << '|' << d << '|' << e << '|' << k << '|' << h << '|' << '\n';
    a = v*100000 + c*10000 + d*1000 + e*100 + k*10 + h;
    //std::cout<< a << '\n';//
    v -= 1;
    c -= 1;
    if (c < 0)
        c += 10;
    d -= 1;
    e -= 1;
    k -= 1;
    h -= 1;
    std::cout << h << e << d <<  v <<  '\n';
    return 0;
}