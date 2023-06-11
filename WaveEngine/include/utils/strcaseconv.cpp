#include "strcaseconv.h"

std::string StringCaseConverter::toUpper(std::string string) {
    std::string upper;

    for(char chr : string) { upper += std::toupper(chr); }

    return upper;
}

std::string StringCaseConverter::toLower(std::string string) {
    std::string lower = "";

    for(char chr : string) { lower += std::tolower(chr); }

    return lower;
}
