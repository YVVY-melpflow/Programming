#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  int Tin;
  long Ain, Bin, Cin;

  cin >> Tin;
  for (int i = 0; i < Tin; i++) {
    long Ans,MinChar;
    cin >> Ain >> Bin >> Cin;

    MinChar = min(Ain, min(Bin, Cin));
    Ain -= MinChar;
    Bin -= MinChar;
    Cin -= MinChar;
    Ans = MinChar;

    if (Ain != 0 && Cin != 0) {
      if (Ain > Cin) {
        long Diff = Ain - Cin;
        if (Ain >= Diff * 2 && Cin >= Diff) {
          Ans += Diff;
          Ain -= (2 * Diff);
          Cin -= Diff;
        } else {
          Ans += Cin;
          Ain -= (2 * Cin);
          Cin = 0;
        }
      } else {
        long Diff = Cin - Ain;
        if (Ain >= Diff && Cin >= Diff * 2) {
          Ans += Diff;
          Ain -= Diff;
          Cin -= (2 * Diff);
        } else {
          Ans += Ain;
          Ain = 0;
          Cin -= (2 * Cin);
        }
      }
    }

    if (Ain > 0 && Cin > 0) {
      Ans += (Ain / 3) * 2;
      if (Ain % 3 == 2) {
        Ans += 1;
      }
    }
    cout << Ans << endl;
  }
}
