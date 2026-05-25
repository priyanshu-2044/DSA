#include <iostream>
#include<vector>
using namespace std;

bool binarysearch(vector<int> &v,int low,int high,int key){
    if(low > high){
        return false;
    }
    int mid = low + (high - low) / 2;
    if(v[mid] == key){
        return true;
    }
    else if(v[mid] > key){
        return binarysearch(v,low,mid-1,key);
    }
    else{
        return binarysearch(v,mid+1,high,key);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(auto &it: v){
        cin >> it;
    }
    int key;
    cout << "Enter key to search: ";
    cin >> key;
    cout << binarysearch(v,0,v.size()-1,key);

    return 0;
}