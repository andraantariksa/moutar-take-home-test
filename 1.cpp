#include <iostream>

unsigned int solve(std::string& s) {
  unsigned int n = 0;
  char cPrev = -1;
  for (auto& c: s) {
    // Branchless code
    switch(c) {
      case 'I':
        n += 1;
        cPrev = 'I';
        break;
      case 'V':
        n += 5 - (cPrev == 'I') * 2 * 1;
        cPrev = 0;
        break;
      case 'X':
        n += 10 - (cPrev == 'I') * 2 * 1;
        cPrev = (cPrev != 'I') * 'X';
        break;
      case 'L':
        n += 50 - (cPrev == 'X') * 2 * 10;
        cPrev = 0;
        break;
      case 'C':
        n += 100 - (cPrev == 'X') * 2 * 10;
        cPrev = (cPrev != 'I') * 'C';
        break;
      case 'D':
        n += 500 - (cPrev == 'C') * 2 * 100;
        cPrev = 0;
        break;
      case 'M':
        n += 1000 - (cPrev == 'C') * 2 * 100;
        cPrev = 0;
        break;
    }
  }
  return n;
}

int main() {
  std::string s;
  std::cin >> s;
  std::cout << solve(s) << '\n';
  // std::string a = "III";
  // std::cout << solve(a) << '\n'; // 3
  // a = "IV";
  // std::cout << solve(a) << '\n'; // 4
  // a = "IX";
  // std::cout << solve(a) << '\n'; // 9
  // a = "LVIII";
  // std::cout << solve(a) << '\n'; // 58
  // a = "MCMXCIV";
  // std::cout << solve(a) << '\n'; // 1994
}