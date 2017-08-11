#include <iostream>

struct AnonUnion
{
    union {
        int x;
        int y;
    };
};

struct NamedUnion
{
    union {
        int x;
        int y;
    } data;
};

struct AnonStruct
{
    struct {
        int x;
        int y;
    };
};

struct NamedStruct
{
    struct {
        int x;
        int y;
    } data;
};

int main(int, char**)
{
    AnonUnion au;
    au.x = 1;

    NamedUnion nu;
    nu.data.x = 2;

    AnonStruct as;
    as.x = 3;

    NamedStruct ns;
    ns.data.x = 4;

   std::cout << au.x << ", " << nu.data.x << ", " << as.x << ", " << ns.data.x;
}
