#include <iostream>
#include <string>
#include <cmath>

void to_bin(std::string data){
  bool wrong_date = false;
  std::string result = "";
  int year = stoi(data.substr(0, 4));
  int month = stoi(data.substr(5, 2));
  int day = stoi(data.substr(8, 2));

  if (day == 0 || month == 0 || month > 12) wrong_date = true;
  if (year < 1980 || year > 2107) wrong_date = true;
  if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) wrong_date = true;
  if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10  || month == 12) && day > 31) wrong_date = true;
  if (month == 2 && (day == 31 || day == 30 || day == 29)) wrong_date = true;
  if (month == 2 && day == 29 && year % 4 == 0) wrong_date = false;
  if (month == 2 && day == 29 && year == 2100) wrong_date = true;

  if (wrong_date){
    std::cout<<"ERROR";
    return;
    }

  year -= 1980;

  for (int i = 0; i < 7; i++){
    if (year >= pow(2, 6 - i)){
      result += '1';
      year -= pow(2, 6 - i);
    } else result += '0';
  }

  for (int i = 0; i < 4; i++){
    if (month >= pow(2, 3 - i)){
      result += '1';
      month -= pow(2, 3 - i);
    } else result += '0';
  }

  for (int i = 0; i < 5; i++){
    if (day >= pow(2, 4 - i)){
      result += '1';
      day -= pow(2, 4 - i);
    } else result += '0';
  }

  std::cout<<result;
}

void to_normal(std::string data){
  std::string result = "";
  bool wrong_date = false;
  std::string byear = data.substr(0, 7);
  std::string bmonth = data.substr(7, 4);
  std::string bday = data.substr(11, 5);
  int year = 1980;
  int month = 0;
  int day = 0;

  for (int i = 0; i < 7; i++){
    if (byear[i] == '1') year += pow(2, 6 - i);
  }

  for (int i = 0; i < 4; i++){
    if (bmonth[i] == '1') month += pow(2, 3 - i);
  }

  for (int i = 0; i < 5; i++){
    if (bday[i] == '1') day += pow(2, 4 - i);
  }

  if (day == 0 || month == 0 || month > 12) wrong_date = true;
  if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) wrong_date = true;
  if (month == 2 && (day == 31 || day == 30 || day == 29)) wrong_date = true;
  if (month == 2 && day == 29 && year % 4 == 0) wrong_date = false;
  if (month == 2 && day == 29 && year == 2100) wrong_date = true;

  if (wrong_date){
    std::cout<<"ERROR";
    return;
    }

  result += std::to_string(year);
  result += '-';
  if (month < 10) result += '0';
  result += std::to_string(month);
  result += '-';
  if (day < 10) result += '0';
  result += std::to_string(day);

  std::cout<<result;

}

int main() {
  std::string data;
  std::cin>>data;
  std::cout<<std::endl;

  if (data[4] == '-') to_bin(data);
  else to_normal(data);
}
