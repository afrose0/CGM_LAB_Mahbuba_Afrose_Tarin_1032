# Lab Assignment 5

## Cyan-to-White Color Transition in an Inverted Triangle

### Description

This project creates an OpenGL window using **C++**, **GLFW**, **GLAD**, and **GLSL shaders**. It displays an upside-down triangle at the center of a black window. The triangle gradually transitions from cyan to white and back over time.

### Features

- Window size: **800 × 600**
- Window title: **0432410005101032**
- Triangle shape: **Inverted Triangle**
- Triangle position: **Center of the window**
- Triangle starting color: **Cyan**
- Transition color: **White**
- Background color: **Black**
- Color smoothly changes from cyan to white and back over time
- Press **Esc** to close the window
- Supports window resizing

### Technologies Used

- C++
- OpenGL 3.3
- GLSL Vertex and Fragment Shaders
- GLFW
- GLAD
- Visual Studio Code

### Output

The program displays an upside-down triangle in the center of a black background. The triangle's color gradually transitions between cyan and white. The window title displays the student ID **0432410005101032**. Pressing **Esc** closes the window.

### Screenshot

Add screenshots of the **source code** and **window output** here. Update the image paths below to match the filenames in your `ss` folder.

![Triangle Color Transition Output](ss/output.png)

![Source Code](ss/code.png)

### Author

**Mahbuba Afrose Tarin**  
**ID: 0432410005101032**

---

# Project Setup

## 1. Windows

- Download the GLFW library from [https://www.glfw.org/download.html](https://www.glfw.org/download.html). Download the **64-bit Windows binaries** from **Windows pre-compiled binaries**.

- Create **build** and **lib** folders in the code repository. Copy `glfw3.dll` from the GLFW `lib-mingw-w64` folder into both the **build** and **lib** folders.

- Download the **MSYS2 Package Manager** from [https://www.msys2.org/](https://www.msys2.org/) to install the C++ compiler and Make.

- Run the following commands in the MSYS2 terminal:

```bash
pacman -S base-devel
pacman -S gcc
```

- Add the MSYS2 folder containing `g++.exe` and `make.exe` to the system PATH. For example:

```text
C:\msys64\usr\bin
```

- Run the following command in the terminal:

```bash
make win
```

- The executable `.exe` file will be generated inside the **build** folder.

- If the program does not run, check whether the system supports **OpenGL 3.3 or above**. You can check using [GLview](http://www.realtech-vr.com/home/glview).

## 2. Linux

- Install the GLFW development library:

```bash
sudo apt-get install libglfw3-dev
```

- Create **build** and **lib** folders in the code repository.

- Run the following command in the terminal:

```bash
make linux
```

- The executable file will be generated inside the **build** folder.

---

# Folder Structure

```text
Lab Assignment 5/
├── build/
├── include/
├── lib/
├── src/
│   ├── glad.c
│   └── main.cpp
├── ss/
│   ├── 1.png
│   └── 2.png
│   └── 3.png
├── Makefile
└── ReadMe.md
```

**Note:** Replace `ss/output.png` and `ss/code.png` with the actual screenshot filenames you upload to your repository.
