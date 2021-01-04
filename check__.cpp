#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <math.h>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cctype>
#include <utility>
#include <set>
#include <map>
#include <sstream>
#include <iterator>
#include <limits>
#include <map>
#include <deque>
#include <stack>
#include <queue>

using namespace std;
#define pb push_back
#define ff(i, a, b) for (int i = a; i < b; i++)
#define ffl(i, a, b) for (long long i = a; i < b; i++)
#define ffr(i, a, b) for (int i = a; i >= b; i--)
// #define all(v) v.begin(), v.end()
//  #define X first
//  #define Y second
// #define mp make_pair
typedef long long ll;
typedef std::vector<int> vec;
typedef std::vector<long long> vecl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
// typedef std::pair<int,int> pii;
typedef pair<ll, ll> pll;
// const int md = 1000000007;
// #define pi 3.141592653589793238462643383279
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i, a[n];
        ff(i, 0, n) cin >> a[i];
        i = n - 1;
        while (i-1 >= 0 && a[i] <= a[i - 1])
            --i;
        while (i-1 >= 0 && a[i - 1] <= a[i])
            --i;
        cout << i << endl;
    }
    return 0;
}
