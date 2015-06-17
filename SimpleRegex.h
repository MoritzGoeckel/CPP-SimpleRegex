#ifndef SIMPLEREGEXHEADER
#define SIMPLEREGEXHEADER

#include <string>

class SimpleRegex{

    private:
        std::sregex_iterator iterator;
        std::sregex_iterator end;

public:
        std::string get(int index);
        bool next();
        SimpleRegex(std::string str, std::string pattern);

};

#endif //SIMPLEREGEXHEADER
