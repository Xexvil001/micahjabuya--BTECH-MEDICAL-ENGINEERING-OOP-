//C++ program to demonstrate inheritance
#include <iostream>
using namespace std;
// base class
class Father {
 public:
 void villa() {
 cout<<"I own villa!"<< endl;
 }
 void land() {
 cout<<"I own land!"<< endl;
 }
};
// derived class
class Son : public Father {
 public:
 void rangerover() {
 cout<<"I can buy ranger over!"<< endl;
 }
};
int main() {
// create object of the Son class
 Son son1;
 // Calling members of the base class
 son1.villa();
 son1.land();
 //Calling member of the derived class
 son1.rangerover();
 return 0;
}