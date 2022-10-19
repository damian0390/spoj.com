#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int k, n, num;
  std::vector<int> numbers;
  std::cin>>k>>n;

  for (int i = 0; i < k; i++){
    std::cin>>num;
    numbers.push_back(num);
  }
  std::rotate(numbers.begin(), numbers.begin() + n, numbers.end());
  for (auto i : numbers) std::cout<<i<<' ';
}
