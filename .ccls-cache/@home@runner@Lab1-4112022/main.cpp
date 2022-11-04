#include <iostream>
using namespace std;

class nokta {
public:
  int x, y;

  nokta();

  nokta(int a, int b) {
    x = a;
    y = b;
  }

  nokta operator+(nokta &bir) {
    nokta a;
    a.x = x + bir.x;
    a.y = y + bir.x;
    return a;
  }

  void yaz() { cout << " " << y; }
};

int main() {
  nokta x(1, 5), y(1, 1);
  x = x + y;
  x = x + 8;

  return 0;
}