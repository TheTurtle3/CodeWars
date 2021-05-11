// Ahmad Zafar
// Encode string with '(' if char occures once, if not encode with ')'

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> number(const vector<string> &lines)
{
  vector<string> sol;
  for (int i = 0; i < lines.size(); i++) {
    string index = to_string(i + 1) + ": ";
    sol.push_back(index + lines.at(i));
  }
  
  return sol;
}
