#include<iostream>
using namespace std;
int main() {
    int first,second;
    cout<<"enter your first number:";
    cin>>first;
    cout<<"enter your second number:";
    cin>>second;
    if(first>second) {
        cout<<"first number is greater:";
    }
    else if(second>first) {
        cout<<"second number is greater:";
    }
    else {
        cout<<"both are equal:";
    }
  return 0;
}
