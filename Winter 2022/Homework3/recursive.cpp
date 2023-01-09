#include <iostream>
#include <string>

bool should_vowel(char x) {
  return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || 
          x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
}

int number_of_vowels(std::string input, int n) {
  if (n == 1) {
    return should_vowel(input[n-1]);
  }
  return number_of_vowels(input, n-1) + should_vowel(input[n-1]);
}

int main() {
  std::string user_input;
  std::cout << "Please enter a string of characters to check the amount of vowels." << std::endl;
  std::getline(std::cin, user_input);

  std::cout << "Your entry was: \"" << user_input << "\" which contains " << number_of_vowels(user_input, user_input.length()) << " vowels.";
}