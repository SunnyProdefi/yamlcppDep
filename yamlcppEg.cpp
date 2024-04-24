#include <fstream>
#include <iostream>
#include <string>
#include <yaml-cpp/yaml.h>

int main() {
  std::ifstream fin("../config.yaml");
  YAML::Node config = YAML::Load(fin);

  if (config["name"]) {
    std::cout << "Name: " << config["name"].as<std::string>() << std::endl;
  }
  if (config["age"]) {
    std::cout << "Age: " << config["age"].as<int>() << std::endl;
  }

  return 0;
}