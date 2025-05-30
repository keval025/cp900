#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> m(26, 0);
    for (int i = 0; i < n; ++i)
    {
      m[s[i] - 'a']++;
    }

    long long cnt = 0;
    for (int i = 0; i < 26; ++i)
    {
      cnt += m[i] % 2;
    }

    if (cnt > k + 1)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
  return 0;
}
