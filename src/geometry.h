#ifndef GEOMETRY
#define GEOMETRY
#include <iostream>
#include <vector>
#include <Eigen/dense>



struct Triangle
{
  Eigen::Vector3f p[3];
};

struct Mesh {
  std::vector<Triangle> tris;
};


#endif
