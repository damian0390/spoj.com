#include <iostream>

int main() {
  int test, n;
  std::cin>>test;
  for (int i = 0; i < test; i++){
    std::cin>>n;

    if (n < 4 || n > 9) std::cout<<0<<" ";
    else if (n < 7 || n == 8) std::cout<<2<<" ";
    else if (n == 7) std::cout<<4<<" ";
    else std::cout<<8<<" ";

    if (n > 4) std::cout<<0<<std::endl;
    else if (n == 0 || n == 1) std::cout<<1<<std::endl;
    else if (n == 2) std::cout<<2<<std::endl;
    else if (n == 3) std::cout<<6<<std::endl;
    else std::cout<<4<<std::endl;
  }

}
