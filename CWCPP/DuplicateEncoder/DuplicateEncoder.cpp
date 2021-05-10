// Ahmad Zafar
// Encode string with '(' if char occures once, if not encode with ')'

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string duplicate_encoder(const string& word){
  unordered_map<char, int> char_count;
  for (char c : word) {
    char_count[tolower(c)]++;
  }
  
  string encoded_str = "";
  for (char c : word) {
    if (char_count[tolower(c)] > 1) {
      encoded_str += ')';
    }
    else {
      encoded_str += '(';
    }
  }
  
  return encoded_str;
}

// User-Input
int main() {
    string user_sen;

    cout << "Enter a String: ";
    getline(cin, user_sen);

    duplicate_encoder(user_sen);
    cout << user_sen;

    return 0;
}