#include <iostream>

struct AnonUnion
{
    union {
        int x;
        int y;
    };
} au;

struct NamedUnion
{
    union {
        int x;
        int y;
    } data;
} nu;

struct AnonStruct
{
    struct
    {
        int x;
        int y;
    };
} as;

struct NamedStruct
{
    struct
    {
        int x;
        int y;
    } data;
} ns;

int main(int, char **)
{
    au.x = 1;
    nu.data.x = 2;
    as.x = 3;
    ns.data.x = 4;
    std::cout << au.x << ", " << nu.data.x << ", " << as.x << ", " << ns.data.x;
}