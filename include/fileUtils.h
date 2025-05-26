//effectively does 2 things:
//1. checking is the file extension is valid or not
//2. reading the file to string
#ifndef FILEUTILS_H
#define FILEUTILS_H

namespace utils {
    bool hasValidExtension(const std::string &filename);

    std::string stringStream(const std::string &filename);
}

#endif //FILEUTILS_H
