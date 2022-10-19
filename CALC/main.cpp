#include <iostream>
#include <string>

int main() {
  std::string operation;
  char sign;
  int a, b;
  size_t found;
  while (std::getline(std::cin, operation)){
    sign = operation[0];
    operation.erase(0,2);
    found = operation.find(' ');
    a = std::stoi(operation.substr(0, found));
    operation.erase(0,found);
    b = std::stoi(operation);

    if (sign == '+') std::cout<<a+b<<std::endl;
    else if (sign == '-') std::cout<<a-b<<std::endl;
    else if (sign == '*') std::cout<<a*b<<std::endl;
    else if (sign == '/') std::cout<<a/b<<std::endl;
    else std::cout<<a%b<<std::endl;
  }
}
