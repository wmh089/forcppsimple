#include<iostream>
#include<array>
#include<algorithm>
#include<iterator>
#include<functional>
using namespace std;

int main()
{
    array<int, 5> arr = {4,2,5,9,1};
    //first
    sort(begin(arr), end(arr));
    cout << "after sort:";
    for(int n : arr)
        cout << n << ' ';
    cout << endl;
    
    //second
    sort(begin(arr), end(arr) , greater<int>());
    cout << "after sort:";
    for(int n : arr)
        cout << n << ' ';
    cout << endl;

    //third
    struct {
        bool operator()(int a, int b)
        {
            return a > b;//true 
        }
    } customLess;
    sort(begin(arr), end(arr), customLess);
    cout << "after sort:";
    for(int n : arr)
        cout << n << ' ';
    cout << endl;
    return 0;
}
