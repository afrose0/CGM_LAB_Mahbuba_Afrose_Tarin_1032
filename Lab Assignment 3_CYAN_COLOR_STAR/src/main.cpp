#include "glad.h"
#include "glfw3.h"

#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "0432410005101032", NULL, NULL); //Resizable or not, multiple window sharing?

    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window); //following all commands on this object, must call this function after glfwCreateWindow() before issuing any OpenGL commands.

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); //update when the user stretches the window

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }    

    // render loop
    // -----------
    //This block of code is the main loop that runs continuously until the window is closed.
    while (!glfwWindowShouldClose(window)) //checks whether the user has clicked the close button on the window or triggered any event to close it.
    {
        // input
        // -----
        processInput(window); //handle keyboard or mouse input.
        // changing the window color here using this two lines. mahbuba
        glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);

        glColor3f(0.0f, 1.0f, 1.0f);

        // Triangle 1 - Top arm
        glVertex2f(0.0f, 0.85f);
        glVertex2f(-0.206f, 0.283f);
        glVertex2f(0.206f, 0.283f);

        // Triangle 2 - Upper-right arm
        glVertex2f(0.808f, 0.262f);
        glVertex2f(0.206f, 0.283f);
        glVertex2f(0.333f, -0.108f);

        // Triangle 3 - Lower-right arm
        glVertex2f(0.500f, -0.688f);
        glVertex2f(0.333f, -0.108f);
        glVertex2f(0.0f, -0.350f);

        // Triangle 4 - Lower-left arm
        glVertex2f(-0.500f, -0.688f);
        glVertex2f(0.0f, -0.350f);
        glVertex2f(-0.333f, -0.108f);

        // Triangle 5 - Upper-left arm
        glVertex2f(-0.808f, 0.262f);
        glVertex2f(-0.333f, -0.108f);
        glVertex2f(-0.206f, 0.283f);


        // Triangle 6 - Center
        glVertex2f(-0.206f, 0.283f);
        glVertex2f(0.206f, 0.283f);
        glVertex2f(0.333f, -0.108f);

        // Triangle 7 - Center
        glVertex2f(-0.206f, 0.283f);
        glVertex2f(0.333f, -0.108f);
        glVertex2f(-0.333f, -0.108f);

        // Triangle 8 - Center
        glVertex2f(-0.333f, -0.108f);
        glVertex2f(0.333f, -0.108f);
        glVertex2f(0.0f, -0.350f);

        glEnd();
        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        // -------------------------------------------------------------------------------
        glfwSwapBuffers(window); //This swaps the back buffer (where your latest OpenGL drawing happens) with the front buffer (the one displayed on screen).
        //Imagine you're drawing a picture. You draw it on a piece of paper that no one can see, and once you're done, you quickly swap it with the paper on the table that everyone is looking at. The result is a smooth transition, with no one seeing the process of you drawing.

        glfwPollEvents(); //respond to user actions like pressing a key, moving the mouse, or resizing the window.
    }

    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    glfwTerminate();
    return 0;
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window) 
{
    if(glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS)    //close the window when the user pressed M
        glfwSetWindowShouldClose(window, true);
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays. 
    glViewport(0, 0, width, height);
}