//[6:41 pm, 16/12/2020] Garvit Kaushik Room No 13: #include <iostream>
#include <iterator>
#include <set>
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int p, q, temp;
    cin >> p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> temp;
        s.insert(temp);
    }
    bool t = 1;
    set<int>::iterator itr;
    //s.begin();
    if (*(s.cbegin()) != 1 || *(--s.cend()) != n)
    {
        t = 0;
    }
    else
    {
        //while(itr!=(s.end() - 1)){
        // while (itr != s.end())
        for (itr = s.begin(); itr != s.end(); itr++)

        {
            if (*itr != *(++itr) - 1)
            {
                t = 0;
                continue;
            }
        }
    }
    if (t)

        cout << "I become the guy." << endl;

    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
