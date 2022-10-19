#include <iostream>
#include <vector>
#include <algorithm>

bool check(std::vector<int> v){
  std::sort(v.begin(), v.end());
  for (int i = 1; i < v.size() - 1; i++){
    if (v[i] == v[i - 1]) return false;
  }
  return true;
}

bool horizontal(std::vector<std::vector<int>> vec){
  for (auto i : vec) if (!check(i)) return false;
  return true;
}

bool vertical(std::vector<std::vector<int>> vec){
  std::vector<int> v;
  for (int x = 0; x < 9; x++){
    for (int y = 0; y < 9; y++){
      v.push_back(vec[y][x]);
    }
    if (!check(v)) return false;
    v.clear();
  }
  return true;
}

bool squares(std::vector<std::vector<int>> vec){
  std::vector<int> v;
  for (int x = 0; x < 9; x += 3){
    for (int y = 0; y < 9; y += 3){
      v.push_back(vec[x][y]);
      v.push_back(vec[x][y + 1]);
      v.push_back(vec[x][y + 2]);
      v.push_back(vec[x + 1][y]);
      v.push_back(vec[x + 1][y + 1]);
      v.push_back(vec[x + 1][y + 2]);
      v.push_back(vec[x + 2][y]);
      v.push_back(vec[x + 2][y + 1]);
      v.push_back(vec[x + 2][y + 2]);
      if (!check(v)) return false;
      v.clear();
    }
  }
  return true;
}

int main() {
  int test, num;
  std::vector<std::vector<int>> vec;
  bool valid;

  std::cin>>test;
  for (int i = 0; i < test; i++){
    vec.clear();
    valid = true;

    for (int x = 0; x < 9; x++){
      vec.push_back({});
      for (int y = 0; y < 9; y++){
        std::cin>>num;
        if (num > 0 && num <= 9) vec[x].push_back(num);
        else{
          valid = false;
          vec[x].push_back(num);
        }
      }
    }

    if (!valid){
      std::cout<<"NIE"<<std::endl;
      continue;
    }

    if (!horizontal(vec)){
      std::cout<<"NIE"<<std::endl;
      continue;
    }

    if (!vertical(vec)){
      std::cout<<"NIE"<<std::endl;
      continue;
    }

    if (!squares(vec)){
      std::cout<<"NIE"<<std::endl;
      continue;
    }

    std::cout<<"TAK"<<std::endl;

  }
}
