#include <bits/stdc++.h>

using namespace std;

void update(int *a, int *b)
{
  int firstPtr = *a, secondPtr = *b;

  *a = (firstPtr + secondPtr);
  *b = abs(firstPtr - secondPtr);
}

int main()
{
  int a, b;

  int *result = &a, *result2 = &b;

  cin >> a >> b;

  update(result, result2);

  cout << a << endl;
  cout << b << endl;

  return 0;
}