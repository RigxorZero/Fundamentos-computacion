#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include <iostream>
using namespace std;

const unsigned int SCREEN_WIDTH = 800;
const unsigned int SCREEN_HEIGHT = 600;

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    if (window != nullptr) {
        glViewport(0, 0, width, height);
    }
}


int main()
{
    // Inicializar GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Crear una ventana
    GLFWwindow* window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello Window - Hector Villalobos y Patricio Jimenez", NULL, NULL);
    if (window == NULL) {
        cout << "Fallo al crear la ventana GLFW" << endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Inicializar GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Fallo al inicializar GLAD" << std::endl;
        return -1;
    }

    // Bucle principal
    while (!glfwWindowShouldClose(window)) {
        // Procesar eventos
        glfwPollEvents();

        // Renderizar
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Intercambiar buffers
        glfwSwapBuffers(window);
    }

    // Limpiar recursos
    glfwTerminate();
  
    return 0;
}