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

int Fibonacci(int n) { // recursive fibonacci sequence that takes in an int, and returns the fibonacci value that would occupy that binary location
  
   if(n < 0){
    return -1;  
   }
   else if (n <= 1){
        return n;
   }
    else{
       return Fibonacci(n-1) + Fibonacci(n-2);
    }
      
}

void printNumPattern(int n1, int n2){ // user inputs a number(n1) and a number to subtract from n1 (n2), and the function prints the pattern from n1 until 0 or a negative value, and then adds n2 until n1 is reached 
   int baseVal = n1;
     cout << n1 << " ";
        if(n1 <= 0){
           if (n1 == baseVal){
               return;
         }
           else{
           printNumPattern(n1 + n2, n2);
         }
        }
        else{
         printNumPattern(n1 - n2, n2);
         cout << n1 << " ";
         }
} 
