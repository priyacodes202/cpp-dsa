#include<iostream>
using namespace std;
int main() {
 int number,reverse=0,digit;
 cout<<"enter your number:";
 cin>>number;
 while(number<0){
 digit=number%10;
 reverse=reverse*10+digit;
 number=number/10;
 }
 cout<<"reverse="<<reverse;
 return 0;
}
