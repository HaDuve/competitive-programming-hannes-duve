// compile with: /clr´
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cout << "TestCases:";
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b, c;

        cout << "important persons a: and number of relations b:";

        cin >> a  >> b; // >> c;
        // int *p;
        // p = new int[a];

        int m_array[1000] {0};
        // money_array
        for (size_t j = 0; j < a-1; j++)
        {
            int m;
            cout << "money m"<< j+1 << ": ";
            cin >> m; 
            
            m_array[j] = m;
        }

        // sorted money list with a 0(jakob) at the end
        int n = sizeof(m_array)/sizeof(m_array[0]); 
        sort(m_array, m_array+n, greater<int>());


        int f_array[1000] {0};
        // family_array
        for (size_t j = 0; j < b; j++)
        {
            int b;
            cout << "family relations b" << j+1 << ": ";
            cin >> b; 
            
            f_array[j] = b;
        }

        // for (size_t k = 0; k < 100; k++)
        // {
        //     cout << p[k] << endl;
        // }

        cout << m_array[0] << endl;
    }

    return 0;
}