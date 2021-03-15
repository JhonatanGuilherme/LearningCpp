#include <iostream> // In and out
#include <vector> // Vector container
#include <string> // String type

using namespace std; // namespace standard

int main(void) {
  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

  for (const string &word : msg) {
    cout << word << " ";
  }
  cout << endl;

  return 0;
}
