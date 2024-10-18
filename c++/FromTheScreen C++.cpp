#include <iostream>
#include <string>
#include <algorithm>  // For std::transform

int main() {
    std::string userInput;

    // Ask the user for a phrase
    std::cout << "don't say 'ksi i love you' ";
    std::getline(std::cin, userInput);

    // Convert input to lowercase for case-insensitive comparison
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

    // Check for specific phrases and respond accordingly
    if (userInput == "ksi i love you") {
        std::cout << "You really thought huh? why would i let you see these lyrics?? " << std::endl;
    }
  

    else {
        std::cout << "you got lucky" << std::endl;
    }

    return 0;
}
