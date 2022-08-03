#ifndef OBJ
#define OBJ

#include "geometry.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace Eigen;

std::vector<Vector3f> parseObj(std::string name) 
{
  std::ifstream file(name);
  std::string input;

  std::vector<Vector3f> vertices;
  Vector3f p;


  while (file >> input)
  {

    if(input == "v") 
    {
      for(int i = 0; i < 3; i++)
      {
        file >> input;
        p(i, 0) = std::stof(input);
      }
      vertices.push_back(p);
    }
  
    else if(input == "f")
    {
      
    }

  }
  return vertices;
}


/*
int main() 
{
  auto data = parseObj("../assets/cube.obj");

  for (Vector3f point : data) 
  {
    std::cout << point << "\n";
  }
}
*/

#endif
