#include <iostream>

int main() {
  int test, n, x, y;
  std::cin>>test;

  for (int i = 0; i < test; i++){
    std::cin>>n>>x>>y;
    for (int j = 1; j < n; j++){
      if (j % x == 0 && j % y != 0) std::cout<<j<<' ';
    }
    std::cout<<std::endl;
  }
}
