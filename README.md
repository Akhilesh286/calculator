# Calulator with qt C++

![file error](https://github.com/Akhilesh286/calculator/blob/b5d358a337f428509ffb3d51c2d347db4a6cad06/Screenshot%20from%202024-07-16%2000-56-57.png)


# 1. Clone the repository
https://github.com/Akhilesh286/calculator.git
cd calculator/calculator/

# 2. Install dependencies (Ubuntu/Debian example)
sudo apt update
sudo apt install cmake qt6-base-dev qt6-base-dev-tools build-essential

# 3. Create build folder
mkdir build
cd build

# 4. Configure with CMake
cmake .. -DCMAKE_PREFIX_PATH=$(qtpaths --install-prefix)

# 5. Build the app
cmake --build .

# 6. Run the app
./calculator
