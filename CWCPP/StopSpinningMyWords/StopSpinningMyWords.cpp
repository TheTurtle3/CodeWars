// Ahmad Zafar
// Words in a string with 5 or more charcters are reversed

#include <iostream>
#include <string>

using namespace std;

string spinWords(const string &str) {
    string spinned_sentence = "";
    istringstream iss(str);
    string word;
  
    while (iss>>word){
    if (word.length() >= 5){
        string z(word.rbegin(), word.rend());
        spinned_sentence += z + " ";
    } 
    else {
        spinned_sentence += word + " ";
        }
    }
    spinned_sentence.pop_back();
    return spinned_sentence;
}

// User-Input
int main() {
    string user_sen;

    cout << "Enter a String: ";
    getline(cin, user_sen);

    spinWords(user_sen);
    cout << user_sen;

    return 0;
}