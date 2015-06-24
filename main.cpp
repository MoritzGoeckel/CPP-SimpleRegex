#include <iostream>
#include "SimpleRegex/SimpleRegex.h"

using namespace std;

int main()
{
    SimpleRegex r = SimpleRegex("Hallo schoene neue Welt", " *(\\w+) *");
    do {
        std::cout << r.get(1) << std::endl;
    }
    while (r.next());

    return 0;
}