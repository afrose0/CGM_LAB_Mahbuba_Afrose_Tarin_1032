# Lab Assignment 2

## Green Rectangle Using 6 Vertices

### Description

This project creates an OpenGL window using **C++**, **GLFW**, and **GLAD**. It displays a green rectangle made using **6 vertices (2 triangles)** on a yellow background.

### Features

- Window size: **800 × 600**
- Window title: **Mahbuba Afrose Tarin**
- Rectangle color: **Green**
- Background color: **Yellow**
- Rectangle created using **6 vertices (2 triangles)**
- Press **M** to close the window
- Supports window resizing

### Technologies Used

- C++
- OpenGL 3.3
- GLFW
- GLAD
- Visual Studio Code

### Output

The program displays a **green rectangular shape** on a **yellow background**. The rectangle is created using **two triangles with a total of six vertices**. Pressing **M** closes the window.

### Screenshot

Added two screenshots: one for the **code** and one for the **window output**.

### Author

**Mahbuba Afrose Tarin**  
**ID: 1032**

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
```

- Add the MSYS2 `bin` folder containing `g++.exe` and `make.exe` to the system PATH:

```text
C:\msys64\usr\bin
```

- Run:

```bash
make win
```

- The `.exe` file will be generated inside the **build** folder.

- If the code does not run, check the OpenGL version using **GLview** from [http://www.realtech-vr.com/home/glview](http://www.realtech-vr.com/home/glview). The system should support **OpenGL 3.3 or above**.

## 2. Linux

- Install the GLFW development library:

```bash
sudo apt-get install libglfw3-dev
```

- Create **build** and **lib** folders in the Code Repository.

- Run:

```bash
make linux
```

- The executable file will be generated inside the **build** folder.