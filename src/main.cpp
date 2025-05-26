#include <iostream>
#include "../include/fileUtils.h"
#include "../include/Tokenizer.h"

int main(int argc, char *argv[]) {
    if ((argc != 2) || (!utils::hasValidExtension(argv[1]))) {
        std::cerr << "Improper Usage," << std::endl;
        std::cerr << "Correct Usage: asterisk <src.ast>" << std::endl;
        return 1;
    }
    std::string contents = utils::stringStream(argv[1]);
    Tokenizer::tokenize(contents);


    return 0;
}
