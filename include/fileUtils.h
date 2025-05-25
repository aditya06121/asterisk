//effectively does 2 things:
//1. checking is the file extension is valid or not
//2. reading the file to string
#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <fstream>
#include <sstream>
#include <string>

// name of the file type
const std::string suffix = ".ast";

bool hasValidExtension(const std::string &filename);

std::string stringStream(const std::string &filename);

inline bool hasValidExtension(const std::string &filename) {
    if (filename.length() < suffix.length()) {
        return false;
    }
    return filename.compare(filename.length() - suffix.length(), suffix.length(), suffix) == 0;
}

inline std::string stringStream(const std::string &filename) {
    std::string contents; {
        std::fstream file(filename, std::ios::in);
        if (!file) {
            throw std::runtime_error(std::string("Unable to open file: ") + filename);
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        contents = buffer.str();
    }
    return contents;
}


#endif //FILEUTILS_H
