#include <iostream>

int main() {
  int test, counter;
  std::string data, res;
  std::cin>>test;
  for (int i = 0; i < test; i++){
    std::cin>>data;
    data += ' ';
    res = "";
    counter = 0;
    for (int j = 0; j < data.size() - 1; j++){
      if (j == 0 || data[j - 1] != data[j]) counter = 0;
      if (counter == 0) {
        res += data[j];
        counter++;
        }
      if (j != 0 && data[j - 1] == data[j]) counter++;
      if (data[j] != data[j + 1] && counter == 2) res += data[j];
      else if (data[j] != data[j + 1] && counter > 2) res += std::to_string(counter);
    }
    std::cout<<res<<std::endl;
  }

}
