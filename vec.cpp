#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;

    // vector<int> anna1;
    // anna1.push_back(1);
    // anna1.push_back(2);

    // vector<int> anna2;
    // anna2.push_back(10);
    // anna2.push_back(20);

    // vector<int> anna3;
    // anna3.push_back(100);
    // anna3.push_back(200);

    // vec.push_back(anna1);
    // vec.push_back(anna2);
    // vec.push_back(anna3);

    // for (auto vctr : vec)
    // {
    //     for (auto it : vctr)
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }

    // another traditional method

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = 0; j < vec[i].size(); j++)
    //     {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> vec1(10, vector<int>(20, 12));

    for (auto vctr1 : vec1)
    {
        for (auto it : vctr1)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}