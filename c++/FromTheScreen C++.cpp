#include <iostream>
#include <string>
#include <algorithm>  

int main() {
    std::string userInput;

   
    std::cout << "don't say 'ksi i love you' ";
    std::getline(std::cin, userInput);

    
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);


    if (userInput == "ksi i love you") {
        std::cout << "You really thought huh? why would i let you see these lyrics?? " << std::endl;
    }
  

    else {
        std::cout << "you got lucky" << std::endl;
    }

    return 0;
}
