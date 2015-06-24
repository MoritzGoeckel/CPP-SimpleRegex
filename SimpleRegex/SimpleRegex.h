#ifndef SIMPLEREGEXHEADER
#define SIMPLEREGEXHEADER

#include <string>
#include <regex>

class SimpleRegex{

    private:
        std::sregex_iterator iterator;
        std::string text;
        std::regex regexPtrn;

public:
        std::string get(int index);
        bool next();
        SimpleRegex(std::string str, std::string pattern);

};

#endif
