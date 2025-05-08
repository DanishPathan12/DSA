#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 34, 55, 121};
    // vector<int>::iterator i;
    // for (i = v.begin(); i != v.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    // pair<int, int> pryr = {1, 2};
    // cout << pryr.first << endl;
    // cout << pryr.second << endl;

    // vector<pair<int, int>> v_p = {{1, 2}, {3, 2}, {12, 3}};
    // vector<pair<int, int>>::iterator it;

    // for (it = v_p.begin(); it != v_p.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // for (auto i = v_p.begin(); i != v_p.end(); i++)
    // {
    //     cout << (*i).first << " " << (*i).second << " " << endl;
    // }
    set<int> s;
    s.insert(45);
    s.insert(425);
    s.insert(451);
    s.insert(415);
    s.insert(415);

    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    for (int i : s)
    {
        cout << i << " ";
    }
}