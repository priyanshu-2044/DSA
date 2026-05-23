#include <iostream>
using namespace std;

void printarray(int arr[],int start,int end){
    if(start >= end)
        return;
    cout << arr[start] << " ";
    printarray(arr,start+1,end);
}

int main()
{
    int arr[5] = {3,7,6,2,8};
    printarray(arr,0,5);

    return 0;
}