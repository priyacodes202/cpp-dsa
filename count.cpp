#include<iostream>
using namespace std;
int main() {
    int number,count=0;
    cout<<"enter your number:";
    cin>>number;
    while(number>0) {
    number=number/10;
    count ++;
  }
  cout<<"number of digits:"<<number;
  return 0;
}
