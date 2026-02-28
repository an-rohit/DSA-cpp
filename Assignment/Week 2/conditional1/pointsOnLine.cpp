#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, x3, y1, y2, y3;
    cout << "Enter x1, y1, x2, y2, x3, y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0)
        cout << "Points lie on the same line." << endl;
    else
        cout << "Points do not lie on the same line." << endl;
}