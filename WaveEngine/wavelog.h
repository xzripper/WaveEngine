#include <iostream>

// Use StringFormatter and make more flexible.
class WaveLog {
public:
    static void info(const std::string& text) { std::cout << "WaveLog INFO: " << text << std::endl; }
    static void info(const std::string& text, const std::string& from) { std::cout << "WaveLog INFO: " << (text + " ") << "[" << from << "];" << std::endl; }

    static void warning(const std::string& text) { std::cout << "WaveLog WARNING: " << text << std::endl; }
    static void warning(const std::string& text, const std::string& from) { std::cout << "WaveLog WARNING: " << (text + " ") << "[" << from << "];" << std::endl; }

    static void error(const std::string& text) { std::cout << "WaveLog ERROR: " << text << std::endl; }
    static void error(const std::string& text, const std::string& from) { std::cout << "WaveLog ERROR: " << (text + " ") << "[" << from << "];" << std::endl; }

    static void critical(const std::string& text) { std::cout << "WaveLog CRITICAL: " << text << std::endl; }
    static void critical(const std::string& text, const std::string& from) { std::cout << "WaveLog CRITICAL: " << (text + " ") << "[" << from << "];" << std::endl; }
};
