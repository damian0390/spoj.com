#include <iostream>
#include <string>

int main() {
  std::string line, number, len, n;
  int counter, length;
  size_t found;
  while (getline(std::cin, line)){
    counter = 0;
    if (line.size() == 0) break;
    found = line.find(' ');
    number = line.substr(0, found);
    line.erase(0, found + 1);
    found = line.find(' ');
    len = line.substr(0, found);
    length = std::stoi(len);
    line.erase(0, found + 1);
    for (int i = 0; i < length - 1; i++){
      found = line.find(' ');
      n = line.substr(0, found);
      line.erase(0, found + 1);
      if (n == number) counter++;
      }
    if (number == line) counter++;
    std::cout<<counter<<std::endl;
  }
}
