#include <iostream>
#include <string>

int main() {
  std::string sentence, result = "";
  while (getline(std::cin, sentence)){
    for (char i : sentence){
      if (i >= 'A' && i <= 'Z'){
        if (i <= 'W') result += i + 3;
        else result += i - 23;
      } else result += i;
    }
    if (sentence.size() == 0) break;
    result += '\n';
    }
  std::cout<<result;

}
