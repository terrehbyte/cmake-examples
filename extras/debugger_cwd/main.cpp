#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main(int argc, char** argv)
{
    std::cout << std::filesystem::current_path() << std::endl;

    if (std::fstream text_file = std::fstream("demo.txt"))
    {
        std::string buffer;
        while (std::getline(text_file, buffer))
        {
            std::cout << buffer << std::endl;
        }
    }
    else
    {
        std::cout << "Failed to open file. Are you in the wrong directory?" << std::endl;
    }

    return 0;
}
