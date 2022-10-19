#include <iostream>

std::string jeden(int i){
  switch (i){
    case 0: return "";
    case 1: return "jeden";
    case 2: return "dwa";
    case 3: return "trzy";
    case 4: return "cztery";
    case 5: return "piec";
    case 6: return "szesc";
    case 7: return "siedem";
    case 8: return "osiem";
    case 9: return "dziewiec";
  }
}

std::string dziesiec(int i, int j){
  switch (i){
    case 0: return "";
    case 1:
      switch (j){
      case 0: return "dziesiec";
      case 1: return "jedenascie";
      case 2: return "dwanascie";
      case 3: return "trzynascie";
      case 4: return "czternascie";
      case 5: return "pietnascie";
      case 6: return "szesnascie";
      case 7: return "siedemnascie";
      case 8: return "osiemnascie";
      case 9: return "dziewietnascie";
    }
    case 2: return "dwadziescia";
    case 3: return "trzydziesci";
    case 4: return "czterdziesci";
    case 5: return "piecdziesiat";
    case 6: return "szescdziesiat";
    case 7: return "siedemdziesiat";
    case 8: return "osiemdziesiat";
    case 9: return "dziewiecdziesiat";
  }
}

std::string sto(int i){
  switch (i){
    case 0: return "";
    case 1: return "sto";
    case 2: return "dwiescie";
    case 3: return "trzysta";
    case 4: return "czterysta";
    case 5: return "piecset";
    case 6: return "szescset";
    case 7: return "siedemset";
    case 8: return "osiemset";
    case 9: return "dziewiecset";
  }
}

int main() {
  int test, c, temp, num;
  long long number;
  std::string result;
  std::cin>>test;

  for (int i = 0; i < test; i++){
    std::cin>>number;
    c = 1;

    while (number != 0){
      num = number % 10;

      if (number % 1000 != 0){
        if (c == 4) result = "tys. " + result;
        else if (c == 7) result = "mln. " + result;
        else if (c == 10) result = "mld. " + result;
        else if (c == 13) result = "bln. " + result;
        }
      number /= 10;
      if (c % 3 == 1 && number % 10 != 1) result = jeden(num) + (num == 0?"":" ") + result;
      else if (c % 3 == 2) result = dziesiec(num, temp) + (num == 0?"":" ") + result;
      else if (c % 3 == 0) result = sto(num) + (num == 0?"":" ") + result;

      temp = num;
      c++;
    }

    std::cout<<result<<std::endl;
    result = "";
  }

}
