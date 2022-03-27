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

void binaryConverter(int num) { // converts an integer into its binary equivalent
    
   if(num == 1){
   cout << num;
   }
   else{
    binaryConverter(num/2);
    cout << num%2;
   }
}

int RaiseToPower(int baseVal, int exponentVal){ // recursive exponential function
   int resultVal;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * RaiseToPower(baseVal, exponentVal-1);
   }

   return resultVal;
}
