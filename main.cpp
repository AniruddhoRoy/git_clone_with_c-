#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    try
    {
        // Create a single directory
        fs::create_directory("my_directory");

        // Create directories recursively (like mkdir -p)
        fs::create_directories("path/to/nested/directory");

        std::cout << "Directory created successfully\n";
    }
    catch (const fs::filesystem_error &e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
//"R:\GCC\mingw64\bin\g++.exe" -std=c++17 -static-libstdc++ main.cpp -o fs_test
