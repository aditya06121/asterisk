#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <vector>
#include <optional>


enum class TokenType {
    _return,
    int_lit,
    semicolon,
};

struct Token {
    TokenType type;
    std::optional<std::string> value;
};


namespace Tokenizer {
    std::vector<Token> tokenize(const std::string &source);
}


#endif //TOKENIZER_H
