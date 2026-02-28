#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Enter an odd n value";
        return 0;
    }

    int arr[n][n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Your array cross pattern is:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           
            if (i == n / 2 || j == n / 2)
                cout << arr[i][j] << " ";
            else
                cout << "  ";  
        }
        cout << endl;
    }

    return 0;
}
