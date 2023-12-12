#include "../../std_lib_facilities.h"

int main() {
    std::cout << "1. '\\n': Newline - Hello\n";
    std::cout << "2. '\\t': Tab - This\tis\ttab\tseparated\n";
    std::cout << "3. '\\r': Carriage return - Overwritten\rline\n";
    std::cout << "4. '\\\\': Backslash - C:\\\\Program Files\\\\Example\n";
    std::cout << "5. '\\\'': Single quote - Don't\n";
    std::cout << "6. '\\\"': Double quote - \"Quoted\"\n";
    std::cout << "7. '\\a': Alert (bell) - Beep\a\n";
    std::cout << "8. '\\b': Backspace - Back\bspace\n";
    std::cout << "9. '\\f': Form feed - Text before\fText after\n";
    std::cout << "10. '\\v': Vertical tab - Text above\vText below\n";
    std::cout << "11. '\\0': Null character - String\0with\0null\0characters\n";
    std::cout << "12. '\\xhh': Hexadecimal representation - '\\x0A' for newline\n";
    std::cout << "13. '\\ooo': Octal representation - '\\012' for newline\n";
}
