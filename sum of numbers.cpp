#include<iostream>
using namespace std;
int main () {
int i, sum=0, num;
cout <<"Enter a num:" << endl;
cin >> num;
for(i =2;i <= num; i =i+2){
cout <<i<<". \n";
sum +=i;
}
cout <<"sum"<< sum;
return 0;
}