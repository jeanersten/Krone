#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
  if (glfwInit())
  {
    std::cout << "GLFW initialized successfully\n";
  }
  
  std::cout << "Welcome to Krone Engine!\n";

  return 0;
}
