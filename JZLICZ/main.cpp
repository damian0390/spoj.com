#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<char, int> m, M;
  std::string line;
  int test;

  for (char i = 'a'; i <= 'z'; i++) m[i] = 0;
  for (char i = 'A'; i <= 'Z'; i++) M[i] = 0;

  std::cin>>test;
  std::cin.ignore();
  for (int i = 0; i < test; i++){
    std::getline(std::cin, line);
    for (char j : line){
      if (j >= 'a' && j <= 'z') m[j]++;
      else if (j >= 'A' && j <= 'Z') M[j]++;
    }
    std::cin.clear();
    }

  for (auto i : m) if (i.second != 0) std::cout<<i.first<<' '<<i.second<<std::endl;
  for (auto i : M) if (i.second != 0) std::cout<<i.first<<' '<<i.second<<std::endl;
}
