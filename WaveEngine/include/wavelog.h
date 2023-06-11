#include <iostream>

#include <vector>

#include <cstring>

#include "utils/strformat.h"

#include "utils/strcaseconv.h"

class WaveLog {
public:
    static void log(const std::string &level, const std::string &text) { std::cout << StringFormat::format("WaveLog %1: %2\n", std::vector<std::string> {StringCaseConverter::toUpper(level), text}); }

    static void log(const std::string &level, const std::string &text, const std::string &from) { std::cout << StringFormat::format("WaveLog %1: %2 [%3];\n", std::vector<std::string> {StringCaseConverter::toUpper(level), text, from}); }

    static void info(const std::string& text) { log("info", text); }
    static void info(const std::string& text, const std::string& from) { log("info", text, from); }

    static void warning(const std::string& text) { log("warning", text); }
    static void warning(const std::string& text, const std::string& from) { log("warning", text, from); }

    static void error(const std::string& text) { log("error", text); }
    static void error(const std::string& text, const std::string& from) { log("error", text, from); }

    static void critical(const std::string& text) { log("critical", text); }
    static void critical(const std::string& text, const std::string& from) { log("critical", text, from); }
};
