#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 5, 9, 10};
    vector<int> vv = {2, 4, 6, 8};
    // first
    //swap_ranges(v.begin(), v.end(), vv.begin());
    //swap_ranges(v.begin(), v.begin() + 4, vv.begin());

    for(int n : v)
        cout << n << ' ';
    cout << endl;

    for(int n : vv)
        cout << n << ' ';
    cout << endl;
 
    // second 
    v.swap(vv);
    for(int n : v)
        cout << n << ' ';
    cout << endl;

    for(int n : vv)
        cout << n << ' ';
    cout << endl;

    //third 
    swap(v, vv);
    for(int n : v)
        cout << n << ' ';
    cout << endl;

    for(int n : vv)
        cout << n << ' ';
    cout << endl;
   return 0;
}
