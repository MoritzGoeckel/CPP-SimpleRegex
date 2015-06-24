# CPP-SimpleRegex
This is a facade class to make a regex search in C++ a bit more simple and more object oriented.

##Usage:
```
SimpleRegex r = SimpleRegex("Hallo schoene neue Welt", " *(\\w+) *");
do {
    std::cout << r.get(1) << std::endl; //0 will get the whole match
}
while (r.next());
```