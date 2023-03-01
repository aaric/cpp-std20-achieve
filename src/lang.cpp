//
// Created by hanqi on 2023/1/17.
//

#include "lang.h"

#include <fcntl.h>

#include <iostream>
#include <limits>

using namespace std;

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
    default:
      cout << "No Fun!" << endl;
  }
}

/**
 * Hello Lang: The first function.
 */
void helloLang() {
  // print
  cout << "Hello, C++20!" << endl;
}

/**
 * Type Lang: The support types.
 */
void typeLang() {
  // sizeof
  cout << "short size: " << sizeof(short) << endl;
  cout << "int size: " << sizeof(int) << endl;
  cout << "long size: " << sizeof(long) << endl;
  cout << "long long size: " << sizeof(long long) << endl;

  int age = 18;
  cout << "age size: " << sizeof(age) << endl;

  char ch1 = 'a';
  char ch2 = 'A';
  cout << "'a' = " << (int)ch1 << ", 'A' = " << (int)ch2 << endl;
  cout << "a\thello world" << endl;
  cout << "aa\thello world" << endl;
  cout << "aaa\thello world" << endl;

  char str1[] = "hello world";
  string str2 = "hello world";
  cout << str1 << endl;
  cout << str2 << endl;

  bool flag = true;
  cout << "true=" << flag << ", false=" << !flag << endl;

  // int, double, char, str,
  string input;
  cout << "input string:" << endl;
  // cin >> input;
  cout << "input=" << input << endl;

  // wchar_t
  // wcout.imbue(locale("chs")); -- failure
  _setmode(_fileno(stdin), _O_U16TEXT);
  _setmode(_fileno(stdout), _O_U16TEXT);
  wchar_t ch = L'中';
  wcout << "ch=" << ch;
  wcout << ", max=" << numeric_limits<wchar_t>::max();
  wcout << ", min=" << numeric_limits<wchar_t>::min();
  cout << ", size=" << sizeof(wchar_t) << endl;
  wcout << "china=" << L"中国" << endl;
}

/**
 * operator Lang: math, logic...
 */
void operatorLang() {
  int a = 10;
  int b = 5;
  cout << "a + b = " << a + b << endl;

  int b1 = ++a * 10;
  int b2 = a++ * 10;
  cout << "b1=" << b1 << ", b2=" << b2 << endl;

  cout << "a > b = " << (a > b) << endl;

  cout << "!a = " << !a << endl;
  cout << "!!a = " << !!a << endl;
}
