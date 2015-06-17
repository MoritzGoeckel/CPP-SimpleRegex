#include <iostream>
#include <regex>
#include "SimpleRegex.h"

using namespace std;

int main()
{

    SimpleRegex* r = new SimpleRegex("Hallo schoene neue Welt", " *(\\w+) *");

    //Test

    /*do {
        std::cout << r->get(1) << std::endl;
        //std::cout << r->get(0) << std::endl;
    }
    while (r->next());*/

    std::cout << r->get(1) << std::endl;
    r->next();
    std::cout << r->get(1) << std::endl;
    //std::cout << r->get(1) << std::endl;
    //std::cout << r->get(1) << std::endl;


    //Working snippet

    std::string s = "Hallo schoene neue Welt";
    std::regex pattern(" *(\\w+) *");

    for(std::sregex_iterator i = std::sregex_iterator(s.begin(), s.end(), pattern);
        i != std::sregex_iterator();
        ++i )
    {
        std::smatch m = *i;
        std::cout << m.str() << " at position " << m.position() << '\n';
    }

    std::cout << "Ende" << std::endl;


    //Working snippet 2

    /*regex pattern(" *(\\w+) *");
    string s = "Hallo schoene neue Welt";
    const std::sregex_iterator End;

    for (sregex_iterator i(s.begin(), s.end(), pattern); i != End; ++i)
    {
        cout << (*i)[1] << endl;
    }*/

    return 0;
}