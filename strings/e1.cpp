#include <iostream>
using namespace std;

int main() {
  string str1 = "Scaler ";
  string str2 = "Topics.";

  str1.append(str2);

  cout << str1 << endl;

  return 0;
}
/*output:
Scaler Topics
*/