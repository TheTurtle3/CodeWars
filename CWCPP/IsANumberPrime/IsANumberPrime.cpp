// Ahmad Zafar
// Is the entered number a prime number?

#include <stdio.h>
#include <math.h>

using namespace std;

// Solution
bool isPrime(int num) {
  if(num <= 1) {
    return false;
  }
  
  if(num == 2) {
    return true;
  }
  
  for(int i = 2; i <= sqrt(num); i++) {
    if(num % i == 0) {
      return false;
    }
  }
  
  return true;
}

// User Input
int main() {
    int input;
    
    printf("Enter an integer: ");
    scanf("%d", &input);

    if(isPrime(input) == true){
        printf("%d is a prime number!", input);
    }
    else{
        printf("%d is not a prime number!", input);
    }
}