#include <iostream>
#include <string>

void solve(std::string& s) {
  for (const auto& ch : s) {
    if (ch == 'E') std::cout << 'S';
    else std::cout << 'E';
  }
  std::cout << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 1; i <= t; ++i) {
    int n;
    std::string s;
    std::cin >> n >> s;
    (void)n;
    std::cout << "Case #" << i << ": ";
    solve(s);
  }
  return 0;
}
