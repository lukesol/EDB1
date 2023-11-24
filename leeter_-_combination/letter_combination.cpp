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



  // cout << "size >>> " + std::to_string(digits.size());

  for (size_t i = 0; i < digits.size(); i++){
    string letters = num_letters_board[digits[i]];
    cout << ">>>" << letters << "\n";

    for(size_t j = 0; j < letters.size(); j++){
      
    }
  }

  return 0;
}



//   std::stringstream check(digits);
//   string intermediate;
//   while (getline(check, intermediate)) {
//     tokens.push_back(intermediate);
//   }