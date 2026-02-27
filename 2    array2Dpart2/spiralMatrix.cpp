#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and cols of first array";
    cin>>m>>n;
    cout<<"enter elements of matrix one"<<endl;
    int mat[m][n];
    //inputs
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }    
    //printing
    cout<<"matrix is :"<<endl;
    for (int i = 0; i < m; i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //wave
    cout<<"result is :"<<endl;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        // 1️⃣ Traverse from Left to Right
        for (int j = left; j <= right; j++) {
            cout << mat[top][j] << " ";
        }
        top++;

        // 2️⃣ Traverse from Top to Bottom
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;

        // 3️⃣ Traverse from Right to Left (if still within bounds)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << mat[bottom][j] << " ";
            }
            bottom--;
        }

        // 4️⃣ Traverse from Bottom to Top (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}