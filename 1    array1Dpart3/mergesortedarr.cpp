    #include<iostream>
    #include<vector>
    using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(m+n);
        int i=0;
        int j=0;
        int k=0;
        // merging while both have element
        while (i<m && j<n){
            if (nums1[i]<=nums2[j]){
                v[k]=nums1[i];
                i++;            
            }
            else {
                v[k]=nums2[j];
                j++;  
            }
            k++;
        }
        //add leftovers
        while (i<m){
            v[k]=nums1[i];
            i++;
            k++;
        }
        while (j<n){
            v[k]=nums2[j];
            j++;
            k++;
        }
        for (int k = 0; k < m + n; k++) {
            nums1[k] = v[k];
        }
    