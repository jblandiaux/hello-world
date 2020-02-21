#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

int partitionBegin(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  int k = l;

  for (int i = l + 1; i <= r; i++) {
    if (a[i] < x) {
      swap(a[i], a[j]);
      j++;
    }
    if (a[i] == x)
    {
      swap(a[k + 1], a[i]);
      k++;

    }

  }
  return j;

}
void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  int m1 = partitionBegin(a, l, r);
  int m2 = partitionEnd(a, l, r);
  randomized_quick_sort(a, l, m1- 1);
  randomized_quick_sort(a, m2+ 1, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
