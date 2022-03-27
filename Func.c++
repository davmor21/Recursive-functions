#include <iostream>
using namespace std;

int gcd(int x, int y) // Greatest Common Denominator
{
    // Everything divides 0
    if (x == 0){
       return y;
    }
    if (y == 0){
       return x;
    }
    // base case
    if (x == y){
        return x;
    }
    // a is greater
    if (x > y){
        return gcd(x-y, y);
    }
    return gcd(x, y-x);
}
