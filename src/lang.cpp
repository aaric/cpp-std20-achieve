//
// Created by hanqi on 2023/1/17.
//

#include "lang.h"
#include <iostream>

int main1(Fun fun)
{
    switch (fun)
    {
    case HELLO_LANG:
        // 1. hello world
        helloLang();
        break;
    case TYPE_LANG:
        // 2. types
        typeLang();
        break;
    default:
        std::cout << "No Fun!" << std::endl;
    }
}

/**
 * Hello Lang: The first function.
 */
void helloLang()
{
    // print
    std::cout << "Hello, C++20!" << std::endl;
}

/**
 * Type Lang: The support types.
 */
void typeLang()
{
    // sizeof
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;

    int age = 18;
    std::cout << sizeof(age) << std::endl;
}
