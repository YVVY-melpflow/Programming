#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  long long Xin, Ain, Din, Nin;

  cin >> Xin >> Ain >> Din >> Nin;

  if (Din == 0) {
    if (Xin >= Ain) {
      cout << Xin - Ain << endl;
    } else {
      cout << Ain - Xin << endl;
    }
    return 0;
  }

  if ((Din > 0) && (Xin <= Ain)) {
    cout << Ain - Xin << endl;
    return 0;
  } else if ((Din > 0) && ((Ain + Din * (Nin - 1)) <= Xin)) {
    cout << Xin - (Ain + Din * (Nin - 1)) << endl;
    return 0;
  } else if (Din < 0 && Xin <= (Ain + Din * (Nin - 1))) {
    cout << (Ain + Din * (Nin - 1)) - Xin << endl;
    return 0;
  } else if (Din < 0 && Ain <= Xin) {
    cout << Xin - Ain << endl;
    return 0;
  }

  long long crossN = ((Xin - Ain) / Din);
  long long NNum  = Ain + Din * crossN;
  long long NNum2 = Ain + Din * (crossN + 1);

  if (Din > 0) {
    if (Xin - NNum > NNum2 - Xin) {
      cout << NNum2 - Xin << endl;
      return 0;
    } else {
      cout << Xin - NNum << endl;
      return 0;
    }
  } else {
    if (NNum - Xin > Xin - NNum2) {
      cout << Xin - NNum2 << endl;
      return 0;
    } else {
      cout << NNum - Xin << endl;
      return 0;
    }
  }

  return 0;
}
