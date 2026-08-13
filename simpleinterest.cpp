#include<iostream>
using namespace std;
int main() {
  int principal,rate,time,simpleinterest;
cout<<"enter principal amount:";
cin>>principal;
cout<<"enter rate:";
cin>>rate;
cout<<"enter time:";
cin>>time;
simpleinterest=(principal*rate*time)/100;
cout<<"simpleinterest="<<simpleinterest;
return 0;
}
