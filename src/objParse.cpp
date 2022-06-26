#include "geometry.h"
#include <iostream>
#include <string>
#include <fstream>

std::vector<Point> parseObj(std::string name) 
{
  std::ifstream file(name);
  std::string input;

  std::vector<Point> vertices;
  Point p;

  Triangle = 

  while (file >> input)
  {
    if(input == "v") {
      file >> input;
      p.x = std::stof(input);  
      file >> input;
      p.y = std::stof(input);
      file >> input;
      p.z = std::stof(input);
      vertices.push_back(p);
    }
  }
  return vertices;
}

int main() 
{
  auto data = parseObj("../assets/cube.obj");

  for (Point point : data) 
  {
    std::cout << point.x << "  ";
    std::cout << point.y << "  ";
    std::cout << point.z << "\n";
  }
}
