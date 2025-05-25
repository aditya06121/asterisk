#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Improper Usage, Correct usage is..." << std::endl;
        std::cerr << "Correct Usage: asterisk <src.ast>" << std::endl;
        return 1;
    }

    std::string contents; {
        std::fstream file(argv[1], std::ios::in);
        if (!file) {
            throw std::runtime_error(std::string("Unable to open file: ") + argv[1]);
        }

        std::stringstream buffer;
        buffer << file.rdbuf();
        contents = buffer.str();
    }
    std::print("{}\n", contents);


    return 0;
}
