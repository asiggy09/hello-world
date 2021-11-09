#include <vector>
#include <string>
#include <iostream>

std::vector<int> get_numbers(std::string str){
  std::vector<int> nums;
  std::string current = "";
  for (int i = 0; i < static_cast<int>(str.length()); i++){
    std::cout << str[i] << std::endl;
    if (static_cast<int>(str.length() - 1) == i && std::isdigit(str[i])){
      current += str[i];
      nums.push_back(std::stoi(current));
      current.clear();
    }
    else if (str[i] == '-' || std::isdigit(str[i])){
      current += str[i];
    }
    else {
      nums.push_back(std::stoi(current));
      current.clear();
    }
  }
  
  return nums;
}

int main(){
  std::vector<int> numbers = get_numbers("12");
  
  for (auto ele : numbers){
    std::cout << ele << std::endl;
  }
}