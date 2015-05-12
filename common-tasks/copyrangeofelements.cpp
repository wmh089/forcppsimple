#include<vector>
#include<algorithm>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> target1(5);//init length is 5

    cout << " source:" ;
    for(int n:source)
        cout << n << " ";
    cout << endl;
    copy(begin(source), end(source), begin(target1));
    cout << "target1:";
    for(vector<int>::iterator iter = target1.begin(); iter != target1.end(); ++iter)
        cout << *iter << " ";
    cout <<endl;

    vector<int> target2;//empty
    copy(begin(source), end(source), back_inserter(target2));//like push_back
    cout << "target2:";
    for(vector<int>::iterator iter = target2.begin(); iter != target2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
    return 0;

}
