#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=20;i++) {
        sum=sum+i;
    }
     cout<<"sum="<<sum;
    return 0;
}
