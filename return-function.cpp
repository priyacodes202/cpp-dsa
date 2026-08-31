#include<iostream>
using namespace std;
int add(int first,int second){
    int sum=first+second;
    return sum;
}
int main(){
    int result;
    result=add(12,20);
    cout<<"sum="<<sum;
}
