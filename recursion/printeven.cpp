#include<iostream>

using namespace std;

void printeven(int n){
  if(n == 2){
    cout << 2 << endl;
    return;
  }
  printeven(n-2);
  cout << n << endl;
}
int main(){
  int n;
  cin >> n;

  printeven(n);
  return 0;
}