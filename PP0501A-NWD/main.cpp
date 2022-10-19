#include <iostream>

int nwd(int a, int b){
  int nwd = 1, n = 2;
  if (a == b) return a;
  while (a >= n && b >= n){
    if (a % n == 0 && b % n == 0){
      nwd *= n;
      a /= n;
      b /= n;
      continue;
    }
    n++;
  }
  return nwd;
}

int main() {
  int test, a, b, res;
  std::cin>>test;
  for (int i = 0; i < test; i++){
    std::cin>>a>>b;
    res = nwd(a,b);
    std::cout<<res<<std::endl;
  }
}
