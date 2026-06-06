#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &arr,int start,int end) {
  int pos = start;

  for(int i=start; i<=end; i++) {
    if(arr[i] <= arr[end]){
      swap(arr[pos],arr[i]);
      pos++;
    }
  }
  return pos-1;
}

void quickSort(vector<int> &arr,int start,int end) {

  if(start >= end){
    return;
  }
  int pivot = partition(arr,start,end);

  quickSort(arr,start,pivot-1);
  quickSort(arr,pivot+1,end);

}

int main() {

  vector<int> arr = {8,28,22,9,1,39,2,82,5,6,3,7,4};
  quickSort(arr,0,arr.size()-1);

  for(int i=0; i<arr.size()-1; i++){
    cout << arr[i] << " ";
  }

  return 0;

}