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
#define X first
#define Y second
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

void merging(int a[], int l, int m, int r)
{
    int i, j;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    ff(i, 0, n1) L[i] = a[l + i];
    ff(i, 0, n1) cout << L[i] << " ";

    cout << endl;
    cout << "********************************************************L";
    cout << endl;
    ff(i, 0, n2) R[i] = a[m + i + 1];
    ff(i, 0, n2) cout << R[i] << " ";
    cout << endl;
    cout << "********************************************************R";
    cout << endl;
    i = 0, j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void Merger_sort(int a[], int l, int r)
{
    if (l >= r)
        return;
    {
        int m = (r + l - 1) / 2;
        Merger_sort(a, l, m);
        Merger_sort(a, m + 1, r);
        merging(a, l, m, r);
    }
}

int main()

{
    int n, i;
    cin >> n;
    int a[n];
    ff(i, 0, n) cin >> a[i];
    ff(i, 0, n) cout << a[i] << " ";
    cout << endl;
    cout << " normal array pribted\n";
    Merger_sort(a, 0, n - 1);
    cout << "new array\n";
    ff(i, 0, n) cout << a[i] << " ";

    return 0;
}
