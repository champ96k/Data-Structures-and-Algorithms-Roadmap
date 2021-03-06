
// C++ program to check for even or odd 
// using Bitwise XOR operator 

// num^1 = > if number is even then increment by one  if odd it decreement by ones

/*
Method 1

Using Bitwise XOR operator:
The idea is to check whether last bit of the number is set or not. If last bit is set then the number is odd, otherwise even.
As we know bitwise XOR Operation of the Number by 1 increment the value of the number by 1 if the number is even otherwise it decrements the value of the number by 1 if the value is odd.


Method 2

Using Bitwise AND operator:
The idea is to check whether the last bit of the number is set or not. If last bit is set then the number is odd, otherwise even.
As we know bitwise AND Operation of the Number by 1 will be 1, If it is odd because the last bit will be already set. Otherwise it will give 0 as output.

bool isEven(int n)  
{  
    n&1 is 1, then odd, else even  
    return (!(n & 1));  
}  

*/
  
#include <iostream> 
using namespace std; 
  
// Returns true if n is even, else odd 

bool isEven(int n) 
{ 
  
    // n^1 is n+1, then even, else odd 
    if (n ^ 1 == n + 1) 
        return true; 
    else
        return false; 
} 
  
// Driver code 
int main() 
{ 
    int n = 100; 
    isEven(n)  
? cout << "Even" 
: cout << "Odd"; 
  
    return 0; 
} 
