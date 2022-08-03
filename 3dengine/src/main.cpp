#ifdef __APPLE__
// Defined before OpenGL and GLUT includes to avoid deprecation messages
#define GL_SILENCE_DEPRECATION
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#endif

#include <iostream>
#include "geometry.h"
#include "objParse.h"



int main() {
  glfwInit();  
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(800, 800, "opengl", NULL, NULL);
  if(window == NULL) 
  {
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);

  gladLoadGL();
  glViewport(0, 0, 800, 800);

  std::vector<Eigen::Vector3f> obj = parseObj("../assets/cube.obj");

  for (int i = 0; i < 8; i++) 
  {
    std::cout << obj[i] << "\n"; 
  }
  
  while(!glfwWindowShouldClose(window)) 
  {
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();

  }

  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
