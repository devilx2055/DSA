#include <iostream>
using namespace std;

int main () {
  int arr[5] = {1, 2, 3, 4, 5};
  int key = 6;

  for (int i = 0; i < 5; i++) {
    if (arr[i] == key) {
      cout << "Found at index " << i << endl;
      break;
    }
  }

  cout << "Not found" << endl;
}
