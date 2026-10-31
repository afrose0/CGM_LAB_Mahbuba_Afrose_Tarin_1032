# Lab Assignment 6

## Computer Graphics and Multimedia

**Student Name:** Mahbuba Afrose Tarin\
**Student ID:** 0432410005101032\
**Course:** Computer Graphics and Multimedia\
**Teacher:** Audity Ghosh

------------------------------------------------------------------------

## Experiment Name

Create a square that changes its color gradually from red to white,
while performing magnification, squeezing, and translation in the X and
Y directions over time.

## Objectives

-   To create a square using OpenGL.
-   To apply translation in the X and Y directions.
-   To perform magnification and squeezing transformations.
-   To change the square's color gradually from red to white.
-   To understand animation using time-based transformations in OpenGL.

## Tools and Technologies

-   C++
-   OpenGL 3.3
-   GLFW
-   GLAD
-   Visual Studio Code
-   MSYS2 / MinGW-w64

## Implementation

The square is created using two triangles with vertex coordinates.
Vertex and fragment shaders are used to display the square and control
its color and transformations.

The program applies the following animations:

1.  **Color Transition:** The square gradually changes between red and
    white.
2.  **Translation:** The square moves diagonally from the bottom-left
    position (120, 120) towards the top-right and returns.
3.  **Magnification and Squeezing:** The square smoothly changes its
    size from approximately 50 × 50 pixels to 5 × 5 pixels at the
    centre, then grows back to approximately 50 × 50 pixels.
4.  **Continuous Animation:** The transformations are updated using the
    elapsed time obtained from `glfwGetTime()`.

## Controls

-   **ESC:** Close the application.

## How to Run

1.  Open the Lab Assignment 6 folder in Visual Studio Code.

2.  Make sure the GLFW and GLAD files are available in the project
    folders.

3.  Open the terminal in the project directory.

4.  Run the following command:

    ``` bash
    make
    ```

5.  Run the generated executable from the `build` folder.

## Result

A square is displayed on a black background. It gradually changes color
from red to white while moving diagonally and smoothly shrinking and
growing over time.

## References

-   [LearnOpenGL](https://learnopengl.com/)
-   [GLFW Documentation](https://www.glfw.org/documentation.html)
-   [Khronos OpenGL Documentation](https://www.khronos.org/opengl/wiki/)
