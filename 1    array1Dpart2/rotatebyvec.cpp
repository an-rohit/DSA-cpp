#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> &a) {
    for (int i=0;i<a.size();i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return;
        if (k == 0) return;
        k =k%n;    //to handle large k value
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
}
int main() {
        vector<int> v;
        v.push_back(2);
        v.push_back(1);
        v.push_back(3);
        v.push_back(6);
        v.push_back(9);
        display(v);
        int k;
        cout<<"enter k";
        cin>>k;
        rotate(v,k);
        display(v);
}
