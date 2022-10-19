#include <iostream>

int main() {
  int test, counter;
  std::string data, data1, data2;
  bool palindrome;

  std::cin>>test;
  for (int i = 0; i < test; i++){
    counter = 0;
    palindrome = true;
    std::cin>>data;

    while (true){
      palindrome = true;
      for (int j = 0; j < data.size(); j++){
        if (data[j] != data[data.size() - 1 - j]){
          palindrome = false;
          break;
        }
      }
      if (palindrome){
        std::cout<<std::stoi(data)<<" "<<counter<<std::endl;
        break;
      } else {
        data1 = data;
        data2 = "";
        for (char i : data) data2 = i + data2;
        data = std::to_string(std::stoi(data1) + std::stoi(data2));
        counter++;
      }
    }
  }
}
