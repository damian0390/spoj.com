#include <iostream>
#include <vector>

int main() {
  int test, a, num;
  std::vector<int> vec;
  std::cin>>test;
  for (int i = 0; i < test; i++){
    std::cin>>num;
    for (int j = 0; j < num; j++){
      std::cin>>a;
      vec.push_back(a);
    }
    for (int j = num - 1; j >=0 ; j--){
      std::cout<<vec[j]<<" ";
    }
    vec.clear();
    std::cout<<std::endl;
  }
}
