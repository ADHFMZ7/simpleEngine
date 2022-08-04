// Defined before OpenGL and GLUT includes to avoid deprecation messages
#define GL_SILENCE_DEPRECATION
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "geometry.h"
#include "objParse.h"
#include "input.h"


#define WIDTH 1800
#define HEIGHT 800

int main() {


  // Initializes and configures glfw 
  glfwInit();  
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


  // Creates window
  GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "opengl", NULL, NULL);
  if(window == NULL) 
  {
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);

  gladLoadGL();
  glViewport(0, 0, WIDTH, HEIGHT);

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
    processInput(window); 
  }

  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}




