#ifndef SIMPLEREGEXIMPLEMENTATION
#define SIMPLEREGEXIMPLEMENTATION

#include <string>
#include <regex>
#include <iostream>
#include "SimpleRegex.h"

SimpleRegex::SimpleRegex(std::string text, std::string pattern) {
    this->regexPtrn = std::regex(pattern);
    this->text = text;
    this->iterator = std::sregex_iterator(this->text.begin(), this->text.end(), regexPtrn);
}

std::string SimpleRegex::get(int index){
    return (*iterator)[index];
}

bool SimpleRegex::next() {
    if(iterator != std::sregex_iterator()){
        ++iterator;
        return true;
    }
    else
        return false;
}

#endif