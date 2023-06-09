#ifndef WAVEENGINE_STRFORMAT_H
#define WAVEENGINE_STRFORMAT_H

#include <string>
#include <vector>
#include <regex>

class StringFormat {
public:
    /**
     * Format string.<br>
     * Example: "Hello %1!" -> "Hello Wave!" (format(string, {"Wave"})).
     *
     * @param fstring String to format.
     * @param flist Vector with replacements.
     */
    static std::string format(std::string fstring, std::vector<std::string> flist);
};

#endif
