#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b, c;
        cin >> a ;// >> b >> c;
        int *p;
        p = new int[a];
        // money_array
        for (size_t j = 0; j < a-1; j++)
        {
            int m;
            cin >> m; 
            
            p[i] = m;
        }

        // sorted money list with a 0(jakob) at the end
        // sort(m_array[0],m_array[a-1])


        cout << p[a-1] << endl;
    }

    return 0;
}