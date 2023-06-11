#ifndef WAVEENGINE_STRCASECONV_H
#define WAVEENGINE_STRCASECONV_H

#include <iostream>

class StringCaseConverter {
public:
    /**
     * Upper string.
     *
     * @param string String to upper.
     */
    static std::string toUpper(std::string string);

    /**
     * Lower string.
     *
     * @param string Lower string.
     */
    static std::string toLower(std::string string);
};

#endif
