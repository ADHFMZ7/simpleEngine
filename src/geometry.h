#include <iostream>
#include <vector>

struct Point 
{
  float x, y, z;
};

struct Triangle
{
  Point p[3];
};

struct Mesh {
  std::vector<Triangle> tris;
};

