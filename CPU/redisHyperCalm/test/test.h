#ifndef _TEST_H_
#define _TEST_H_

#include <string>

class String
{
public:
    std::allocator<char> a;
    std::string *x;
    void Create(const char *s)
    {
        x = new std::string(s);
    }
    void Destroy() { delete x; }
    long long change(const char *s)
    {
        delete x;
        x = new std::string(s);
        return 1;
    }
    const char *get() { return x->c_str(); }
};

#endif