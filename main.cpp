#include <iostream>
using namespace std;

int main() {
    int n;
    for (int i = 1; i <= n; i++) {
    
      if (i % 3 == 0 && i % 5 == 0){
       cout << "FizzBuzz" << endl;
       }
      
      if (i % 3 == 0 && i % 5 != 0){
       cout << "Fizz" << endl;
       }
      
       if (i % 5 == 0 && i % 3 != 0){
       cout << "Buzz" << endl;
       } 
       
       else if (i % 3 != 0 && i % 5 != 0){
       cout << i << endl;
    }
     
  }

}