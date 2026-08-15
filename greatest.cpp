#include<iostream>
using namespace std;
int main() {
    int first,second,third;
    cout<<"enter your first number:";
    cin>>first;
    cout<<"enter your second number:";
    cin>>second;
    cout<<"enter your third number:";
    cin>>third;
    if(first>=second && first>=third) {
        cout<<"first number is greatest:";
    }
    else if(second>=first && second>=third) {
        cout<<"second number is greatest:";
    }
    else {
        cout<<"third number is greatest:";
    }
    return 0;
}
