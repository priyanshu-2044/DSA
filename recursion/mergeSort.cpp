#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end) {
  vector<int> temp(end-start+1);
  int left = start,right = mid + 1, index = 0;
  while (left <= mid && right <= end){
    if(arr[left] < arr[right]){
      temp[index] = arr[left];
      left++,index++;
    }
    else {
      temp[index] = arr[right];
      index++,right++;
    }
  }
  while (left <= mid){
    temp[index] = arr[left];
    index++,left++;
  }
  while (right <= end){
    temp[index] = arr[right];
    index++,right++;
  }
  for(int i = 0; i < temp.size(); i++) {
    arr[start + i] = temp[i];
  }
}

void mergeSort(vector<int> &arr,int start,int end) {
  int mid = start + (end - start)/2;

  if(start >= end){
    return;
  }

  mergeSort(arr,start,mid);
  mergeSort(arr,mid+1,end);
  merge(arr,start,mid,end);

}

int main() {
  
  vector<int> arr = {8,7,6,1,2,3,9,4,5};
  mergeSort(arr,0,arr.size()-1);
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  return 0;
}