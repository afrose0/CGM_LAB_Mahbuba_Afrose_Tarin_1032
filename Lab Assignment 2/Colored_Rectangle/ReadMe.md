# Lab Assignment 1

## OpenGL Magenta Window

### Description

This project creates an OpenGL window using **C++**, **GLFW**, and **GLAD**.

### Features

- Window size: **800 × 600**
- Window title: **Mahbuba Afrose Tarin**
- Background color: **Magenta**
- Press **M** to close the window
- Supports window resizing

### Technologies Used

- C++
- OpenGL 3.3
- GLFW
- GLAD
- Visual Studio Code

### Output

The program displays a magenta OpenGL window with the title **Mahbuba Afrose Tarin**. Pressing **M** closes the window.

### Screenshot

Added two screenshots one for code and one for the window 

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

- Add the MSYS2 `bin` folder containing `g++.exe` and `make.exe` to the system PATH. For example:

```text
C:\msys64\usr\bin
```

- Run the following command in the terminal:

```bash
make win
```

- The `.exe` file will be generated inside the **build** folder.

- If the code does not run, check the OpenGL version by installing **GLview** from [http://www.realtech-vr.com/home/glview](http://www.realtech-vr.com/home/glview). The system should support **OpenGL 3.3 or above**.

## 2. Linux

- Install the GLFW development library using:

```bash
sudo apt-get install libglfw3-dev
```

- Create **build** and **lib** folders in the Code Repository.

- Run:

```bash
make linux
```

- The executable file will be generated inside the **build** folder.