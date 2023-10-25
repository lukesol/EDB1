#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

  string digits;
  vector<string> tokens;

  unordered_map<char, string> num_letters_board{
      {'1', ""},    {'2', "abc"},  {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
      {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

  cin >> digits;


  for (size_t i = 0; i < digits.size(); i++){
    // cout << ">>>" << digits[i] << "\n";
    string letters = num_letters_board[digits[i]];
    cout << ">>>" << letters.size() << "\n";
  }

  return 0;
}



//   std::stringstream check(digits);
//   string intermediate;
//   while (getline(check, intermediate)) {
//     tokens.push_back(intermediate);
//   }