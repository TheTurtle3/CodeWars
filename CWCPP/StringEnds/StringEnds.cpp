//Ahmad Zafar
//Find if the second string is the end of the first string

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

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

int main() {
    if(solution("abcd","") == true){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}