# OpenCV Explorer

OpenCV Explorer is a C++ project for experimenting with the OpenCV library for computer vision
tasks.

## Requirements

- CMake 3.22 or higher
- GCC or any compatible C++ compiler
- C++ standard version 11 or later
- OpenCV library

## Building the Project

1. Clone the repository:
    ```sh
    git clone https://github.com/hgorges/opencv-explorer.git
    cd opencv-explorer
    ```

2. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

3. Configure the project with CMake:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    make -j$(nproc)
    ```

## Running the Application

After building the project, you can run the executable:

```sh
./opencv_explorer ../res/duck.jpg
```

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file
for details.