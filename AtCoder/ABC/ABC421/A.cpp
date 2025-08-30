#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int Nin;
  string Sin[100];
  int Xin;
  string Yin;
  cin >> Nin;
  for (int i = 0; i < Nin; i++) {
    cin >> Sin[i];
  }
  cin >> Xin >> Yin;

  if (Sin[Xin - 1] == Yin) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
