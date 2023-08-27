#include"Application.h"

int main(int argc, char** argv) 
{
	std::cout << "Hello Cmake world!" << std::endl;
    if constexpr (std::endian::native == std::endian::big)
        std::cout << "big-endian\n";
    else if constexpr (std::endian::native == std::endian::little)
        std::cout << "little-endian\n";
    else
        std::cout << "mixed-endian\n";
}