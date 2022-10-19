#include <iostream>

int main() {
  int test, n, num, sum;
  std::cin>>test;
  for (int i = 0; i < test; i++){
    sum = 0;
    std::cin>>n;
    for (int j = 0; j < n; j++){
      std::cin>>num;
      sum += num;
    }
    std::cout<<sum<<std::endl;
  }

}
