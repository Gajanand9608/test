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
// #define X first
// #define Y second
// #define mp make_pair
typedef long long ll;
typedef std::vector<int> vec;
typedef std::vector<long long> vecl;
// typedef map<int,int> mii;
// typedef map<ll,ll> mll;
// typedef std::pair<int,int> pii;
// typedef pair<ll,ll> pll;
// const int md = 1000000007;
// #define pi 3.141592653589793238462643383279
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, a[105], b[105];
        int mexa = 0, mexb = 0;
        cin >> n;
        ff(i, 0, n)
        {
            cin >> a[i];
        }
        // cout<<a[0]<<endl;
        int c = 0;

        while (c <= 105)
        {
            int count_ = 0;
            ff(i, 0, n)
            {
                if (a[i] == c)
                    count_++;
            }
            b[c] = count_;
            c++;
        }
        // int mexa=0,mexb=0;
        // while(b[])
        // ff(i, 0, 100) cout << b[i] << endl;

        ff(i, 0, 105)
        {
            if (b[i] == 0)
            {
                mexa = i;

                break;
            }
        }
        ff(i, 0, 105)
        {
            if (b[i] <= 1)

            {
                mexb = i;

                break;
            }
        }
        cout << mexa + mexb << endl;
    }
    return 0;
}
