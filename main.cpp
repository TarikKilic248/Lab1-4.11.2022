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

  nokta operator+(int c) {
    this->x = x + c;
    this->y = y + c;
    return *this;
  }

  void yaz() { cout << " " << y; }
};

int main() {
  nokta x(1, 5), y(8, 4);
  x = x + y;
  x.yaz();
  x = x + 8;
  x.yaz();
  

  return 0;
}