#include <bits/stdc++.h>
using namespace std;
int minElement(int arr[],int end){
    if(end < 0){
        return INT_MAX;
    }
    return min(arr[end],minElement(arr,end-1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[5] = {7,2,4,1,6};
    cout << minElement(arr,5);
    return 0;
}