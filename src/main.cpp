#include <clocale>

#include "lang.h"

using namespace std;

int main() {
  // env
  setlocale(LC_ALL, "zh_CN.UTF-8");

  // lang
  main1(TYPE_LANG);

  return 0;
}
