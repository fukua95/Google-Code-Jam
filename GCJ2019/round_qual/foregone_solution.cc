#include <iostream>
#include <string>

const int MAXN = 100;

int a[MAXN], b[MAXN];

void print(int ca, int len) {
  std::cout << "Case #" << ca << ": ";
  int p = len - 1;
  while (a[p] ==0) --p;
  for (int i = p; i >= 0; --i) std::cout << a[i];
  std::cout << " ";
  p = len - 1;
  while (b[p] == 0) --p;
  for (int i = p; i >= 0; --i) std::cout << b[i];
  std::cout << std::endl;
}

void solve(int ca, const std::string& n) {
  int len = n.length();
  for (int i = 0; i < len; ++i) {
    a[i] = b[i] = 0;
  }
  for (int i = len - 1; i >= 0; --i) {
    int x = n[i] - '0';
    if (x > 0) {
      if (x == 5) a[len - 1 - i] = 3, b[len - 1 - i] = 2;
      else a[len - 1 - i] = 1, b[len - 1 - i] = x - 1;
    }
  }
  print(ca, len);
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 1; i <=t ; ++i) {
    std::string n;
    std::cin >> n;
    solve(i, n);
  }
  return 0;
}
