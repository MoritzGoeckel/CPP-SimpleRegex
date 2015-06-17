#ifndef SIMPLEREGEXIMPLEMENTATION
#define SIMPLEREGEXIMPLEMENTATION

#include <string>
#include <regex>
#include <iostream>
#include "SimpleRegex.h"

SimpleRegex::SimpleRegex(std::string str, std::string pattern) {
    std::regex regexPtrn(pattern);
    iterator = std::sregex_iterator(str.begin(), str.end(), regexPtrn);
    end = std::sregex_iterator();
}

std::string SimpleRegex::get(int index){
    std::smatch m = *iterator;
    std::cout << m.str() << " at position " << m.position() << '\n';
    return (*iterator)[index];
}

bool SimpleRegex::next() {
    if(iterator != end){
        ++(iterator);
        return true;
    }
    else
        return false;
}

#endif