#include<iostream>
#include<algorithm>
using namespace std;
int main()

{
    int lastocc=-1,x;
    cout<<"enter x: ";
    cin>>x;
    int arr[6]={1,2,3,4,1,2};

    for (int i=5;i>=0;i--){
        if (x==arr[i]){
            lastocc=i;
            break;
        }
    }
    cout<<lastocc;





    // for (int i=0;i<6;i++){
    //     if (x==arr[i]){
    //         lastocc=i;
    //     }
    // }
    // cout<<lastocc;


    // int x;
    // cout<<"enter x: ";
    // cin>>x;
    // int arr[6]={1,2,3,4,1,2};
    // auto it=find(rbegin(arr),rend(arr),x);
    // if (it == rend(arr))      //? -1 : 5 - (it - rbegin(arr)));
    // {
    //     cout<<-1;
    // }
    // else{
    //     cout<<5-(it-rbegin(arr));
    // }
}

