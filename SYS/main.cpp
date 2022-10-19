#include <iostream>

void hex_convert(int &hex, std::string &res){
  int num = hex % 16;
  if (num < 10) res =(char)('0' + num) + res;
  else res =(char)('A' + num - 10) + res;
  hex /= 16;
}

void elev_convert(int &elev, std::string &res){
  int num = elev % 11;
  if (num < 10) res =(char)('0' + num) + res;
  else res ='A' + res;
  elev /= 11;
}

int main() {
  int test, elev, hex;
  std::string res;
  std::cin>>test;

  for (int i = 0; i < test; i++){
    res = "";
    std::cin>>elev;
    hex = elev;

    while (elev != 0) elev_convert(elev, res);
    res = ' ' + res;
    while (hex != 0) hex_convert(hex, res);

    std::cout<<res<<std::endl;
  }
}
