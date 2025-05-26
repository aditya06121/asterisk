#include <sstream>
#include <string>
#include <fstream>
#include "../include/fileUtils.h"

namespace utils {
    bool hasValidExtension(const std::string &filename) {
        // name of the file type
        const std::string suffix = ".ast";
        if (filename.length() < suffix.length()) {
            return false;
        }
        return filename.compare(filename.length() - suffix.length(), suffix.length(), suffix) == 0;
    }

    std::string stringStream(const std::string &filename) {
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
}
