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
    std::cout << "short size: " << sizeof(short) << std::endl;
    std::cout << "int size: " << sizeof(int) << std::endl;
    std::cout << "long size: " << sizeof(long) << std::endl;
    std::cout << "long long size: " << sizeof(long long) << std::endl;

    int age = 18;
    std::cout << "age size: " << sizeof(age) << std::endl;

    char ch1 = 'a';
    char ch2 = 'A';
    std::cout << "'a' = " << (int) ch1 << ", 'A' = " << (int) ch2 << std::endl;
}
