#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
  if (glfwInit())
  {
    std::cout << "GLFW initialized successfully\n";
  }

  GLFWwindow* window = glfwCreateWindow(640, 480, "Krone Engine!", nullptr, nullptr);

  if (!window)
  {
    std::cerr << "Failed to create GLFW window!\n";
  }
  else
  {
    glfwMakeContextCurrent(window);
  }

  if (gladLoadGL(glfwGetProcAddress))
  {
    std::cout << "OpenGL functions retrived via GLAD!\n";
  }
  
  std::cout << "Welcome to Krone Engine!\n";

  return 0;
}
