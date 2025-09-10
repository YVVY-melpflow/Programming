#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string Sin;
  cin >> Sin;

  int StageHigh = Sin[0] - '0';
  int StageLow  = Sin[2] - '0';
  if (StageLow == 8) {
    cout << StageHigh + 1 << "-1" << endl;
  } else {
    cout << StageHigh     << "-" << StageLow + 1 << endl;
  }
}
