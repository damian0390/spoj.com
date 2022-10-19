#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

std::vector<std::pair<char, char>> data = {
{'a','2'},{'b','2'},{'c','2'},
{'d','3'},{'e','3'},{'f','3'},
{'g','4'},{'h','4'},{'i','4'},
{'j','5'},{'k','5'},{'l','5'},
{'m','6'},{'n','6'},{'o','6'},
{'p','7'},{'q','7'},{'r','7'},{'s','7'},
{'t','8'},{'u','8'},{'v','8'},
{'w','9'},{'x','9'},{'y','9'},{'z','9'}
};

bool check(std::string word, std::string number){
  for (int i = 0; i < word.size(); i++){
    for (int j = 0; j <= data.size(); j++){
      if (j == data.size()) return false;
      if (word[i] == data[j].first && number[i] == data[j].second) break;
    }
  }
  return true;
}

int main() {
  int n, k;
  std::cin>>n>>k;
  std::string word;
  long long number;
  bool flag;
  std::vector<std::string> words;
  std::vector<std::string> numbers;
  std::vector<std::string> results;

  for (int i = 0; i < n; i++){
    std::cin>>word;
    words.push_back(word);
  }

  for (int i = 0; i < k; i++){
    std::cin>>number;
    numbers.push_back(std::to_string(number));
  }

  for (int i = 0; i < k; i++){
    results.clear();
    for (int j = 0; j < n; j++){
      if (numbers[i].size() == words[j].size()){
        if (check(words[j], numbers[i])){
          results.push_back(words[j]);
        }
      }
    }
    if(results.size() == 0) std::cout<<"BRAK";
    else{
      std::sort(results.begin(), results.end());
      for (int k = 0; k < results.size(); k++){
        std::cout<<results[k]<<" ";
      }
    }
    std::cout<<std::endl;
  }

}
