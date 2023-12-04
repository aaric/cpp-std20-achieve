//
// Created by hanqi on 2023/1/17.
//

#include "lang.h"

#include <fcntl.h>

#include <iostream>
#include <limits>

int main1(Fun fun) {
    switch (fun) {
        case HELLO_LANG:
            // 1. hello world
            helloLang();
            break;
        case TYPE_LANG:
            // 2. types
            typeLang();
            break;
        case OPERATOR_LANG:
            // operator
            operatorLang();
            break;
        case STRING_LANG:
            // string
            stringLang();
            break;
        default:
            std::cout << "No Fun!" << std::endl;
    }
}

/**
 * Hello Lang: The first function.
 */
void helloLang() {
    // print
    std::cout << __cplusplus << std::endl;
    std::cout << "Hello, C++20!" << std::endl;
}

#define NEWLINE '\n'

/**
 * Type Lang: The support types.
 */
void typeLang() {
    // sizeof
    std::cout << "short size: " << sizeof(short) << std::endl;
    std::cout << "int size: " << sizeof(int) << std::endl;
    std::cout << "long size: " << sizeof(long) << std::endl;
    std::cout << "long long size: " << sizeof(long long) << std::endl;

    int age = 18;
    std::cout << "age size: " << sizeof(age) << std::endl;

    char ch1 = 'a';
    char ch2 = 'A';
    std::cout << "'a' = " << (int)ch1 << ", 'A' = " << (int)ch2 << std::endl;
    std::cout << "a\thello world" << std::endl;
    std::cout << "aa\thello world" << std::endl;
    std::cout << "aaa\thello world" << std::endl;

    char str1[] = "hello world";
    std::string str2 = "hello world";
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    bool flag = true;
    std::cout << "true=" << flag << ", false=" << !flag << std::endl;

    // int, double, char, str,
    /*string input;
    std::cout << "input string:" << std::endl;
    cin >> input;
    std::cout << "input=" << input << std::endl;*/

    // const
    const int WIDTH = 400, HEIGHT = 300;
    std::cout << WIDTH * HEIGHT << NEWLINE;

    // unsigned
    unsigned short u1 = 100;
    unsigned int u2 = 100;
    unsigned long u3 = 100;
    unsigned long long u4 = 100;
    std::cout << "u1=" << sizeof(u1) << std::endl;
    std::cout << "u2=" << sizeof(u2) << std::endl;
    std::cout << "u3=" << sizeof(u3) << std::endl;
    std::cout << "u4=" << sizeof(u4) << std::endl;

    // volatile
    volatile int v1 = 100;
    std::cout << "v1=" << v1 << std::endl;

    // wchar_t
    // wstd::cout.imbue(locale("chs")); -- failure
    /*_setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t ch = L'中';
    wstd::cout << "ch=" << ch;
    wstd::cout << ", max=" << numeric_limits<wchar_t>::max();
    wstd::cout << ", min=" << numeric_limits<wchar_t>::min();
    std::cout << ", size=" << sizeof(wchar_t) << std::endl;
    wstd::cout << "china=" << L"中国" << std::endl;*/

    // typeid
    int i1 = 0;
    double d1 = 0;
    typeof(i1) i2 = 5;
    std::cout << "i2 = " << i2 << ", d1 = " << d1 << std::endl;
    std::cout << typeid(d1).name() << std::endl;
    std::cout << typeid(i1 + d1).name() << std::endl;
    std::cout << typeid(int).name() << std::endl;
}

/**
 * operator Lang: math, logic...
 */
void operatorLang() {
    int a = 10;
    int b = 5;
    std::cout << "a + b = " << a + b << std::endl;

    int b1 = ++a * 10;
    int b2 = a++ * 10;
    std::cout << "b1=" << b1 << ", b2=" << b2 << std::endl;

    std::cout << "a > b = " << (a > b) << std::endl;

    std::cout << "!a = " << !a << std::endl;
    std::cout << "!!a = " << !!a << std::endl;
}

/**
 * string Lang
 */
void stringLang() {
    using namespace std::string_literals;
    std::u32string str1 = U"Hello World";
    const char* str2 = R"(Line1
Line2
Line3)";
    // const char* str3 = u8"Hello World";
    const wchar_t* str4 = L"Hello World";
    const char16_t* str5 = u"Hello World";
    const char32_t* str6 = U"Hello World";
}
