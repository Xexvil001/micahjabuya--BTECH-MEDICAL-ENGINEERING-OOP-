// program to convert fahrenheit to celcius 
#include<iostream>
using namespace std;
float D(float Fahrenheit);
int main ()   {
int Fahrenheit ;
float celcius;
cout<<"Enter Temperature in Fahrenheit:"<<endl;
cin>>Fahrenheit;
celcius=(Fahrenheit);
cout<<"celsius is:"<<celcius<<endl;
return 0;
}
float D(int Fahrenheit){
float celcius ;
celcius =5.0/9.0*(Fahrenheit - 5);
return celcius;
}