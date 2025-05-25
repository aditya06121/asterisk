#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "../include/fileUtils.h"

enum class TokenType {
    _return,
    int_lit,
    semicolon,
};

struct Token {
    TokenType type;
    std::optional<std::string> value;
};

std::vector<Token> tokenize(const std::string &str) {
    for (char c: str) {
        std::print("{}\n", c);
    }
}

int main(int argc, char *argv[]) {
    if ((argc != 2) || (!hasValidExtension(argv[1]))) {
        std::cerr << "Improper Usage," << std::endl;
        std::cerr << "Correct Usage: asterisk <src.ast>" << std::endl;
        return 1;
    }
    std::string contents = stringStream(argv[1]);
    tokenize(contents);


    return 0;
}
