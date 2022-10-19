#include <iostream>

int main() {
  float a,b,c;
  size_t found;
  std::string line;
  while(getline(std::cin, line)){
    if (line.size() == 0) break;

    found = line.find(" ");
    a = std::stof(line.substr(0, found));
    //if (a < 0) a = -a;
    line.erase(0, found + 1);

    found = line.find(" ");
    b = std::stof(line.substr(0, found));
    //if (b < 0) b = -b;
    line.erase(0, found + 1);

    c = std::stof(line);
    //if (c < 0) c = -c;

    if (a + b > c && a + c > b && b + c > a) std::cout<<1<<std::endl;
    else std::cout<<0<<std::endl;
  }
}
