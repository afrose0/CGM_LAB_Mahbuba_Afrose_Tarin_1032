# Lab Assignment 4

## Cyan Square with Magenta Triangle

### Description

This project creates an OpenGL window using **C++**, **GLFW**, and **GLAD**. It displays a cyan-colored square on a white background with a magenta equilateral triangle on top. The triangle shares the two top corner points of the square.

### Features

- Window size: **800 × 600**
- Window title: **Mahbuba Afrose Tarin**
- Square color: **Cyan**
- Triangle color: **Magenta**
- Background color: **White**
- Triangle shape: **Equilateral Triangle**
- Triangle shares two corner points of the square
- Press **M** to close the window
- Supports window resizing

### Technologies Used

- C++
- OpenGL 3.3
- GLFW
- GLAD
- Visual Studio Code

### Output

The program displays a **cyan-colored square** on a **white background** with a **magenta equilateral triangle** on top. The triangle shares the two top corners of the square. The window title is **Mahbuba Afrose Tarin**. Pressing **M** closes the window.

### Screenshot

#### Output

![Cyan Square with Magenta Triangle](ss/squar%20and%20circle.png)

### Author

**Mahbuba Afrose Tarin**  
**ID: 0432410005101032**

---

# Project Setup

## 1. Windows

- Download the GLFW library from [https://www.glfw.org/download.html](https://www.glfw.org/download.html). Download **64-bit Windows binaries** from **Windows pre-compiled binaries**.

- Create **build** and **lib** folders in the Code Repository. Put `glfw3.dll` from the `lib-mingw-w64` folder of the GLFW library into both **build** and **lib** folders.

- For the C++ compiler and Make, download **MSYS2 Package Manager** from [https://www.msys2.org/](https://www.msys2.org/).

- Run the following commands in the MSYS2 terminal:

```bash
pacman -S base-devel
pacman -S gcc