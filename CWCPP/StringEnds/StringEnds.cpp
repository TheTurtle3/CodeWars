//Ahmad Zafar
//Find if the second string is the end of the first string

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

// solution
bool solution(string const &str, string const &ending) {
  if(str.length() < ending.length()) {
    return false;
  }
  else if(str.substr(str.length() - ending.length()) == ending) {
    return true;
  }
  else{
    return false;
  }
}

// main function
int main() {
    string s1, s2;
    
    printf("Enter your first string: ");
    cin >> s1;

    printf("Enter your second string: ");
    cin >> s2;

    if(solution(s1,s2) == true){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}