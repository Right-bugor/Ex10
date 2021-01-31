// Copyright 2020 Bugrov
#include <iostream>
#include <string>

#include "../include/postfix.h"

int main() {
    std::string s("2 + 6 * 3 / (4 - 2)");
    std::cout << infix2postfix(s) << '\n';
    ;  // 2 6 3 * 4 2 - / +
    s = ("(1 + 2) / (3 + 4 * 6.7) - 5.3 * 4.4");
    std::cout << infix2postfix(s);  // 1 2 + 3 4 6.7 * + / 5.3 4.4 * -
    s = "(6 * (4 - 2) + 5) * (2.6 + 3 * 7) - 9";
    std::cout << infix2postfix(s);  // 6 4 2 - * 5 + 2.6 3 7 * + * 9 -
    return 0;
}
