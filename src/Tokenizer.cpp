#include "../include/Tokenizer.h"
#include <vector>
#include <iostream>

namespace Tokenizer {
    std::vector<Token> tokenize(const std::string &str) {
        for (char c: str) {
            std::print("{}\n", c);
        }
    }
}
