#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A, B, C;
        cin >> A >> B;

        // compass here
        int arr[2];
        arr[0] = A;
        arr[1] = B;
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr+n);      

        C = B - A;

        // if C < 180 we go clockwise otherwise counterclockwise
        if (C < -180)
        {
            C = 360 + B - A;
            cout << C << endl;
        }else        
        cout << C << endl;
    }

    return 0;    
}