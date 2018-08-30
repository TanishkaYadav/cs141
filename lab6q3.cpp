//include library
#include <iostream>
using namespace std;
int main() {
int num;
cout << "enter a number \n";
cin>>num;
if (num>0) {
cout<<"you have entered positive number";
}
else if (num<0) {
cout << "you have entered negative number";
}else {
cout <<"you have entered zero";
}
return 0;
}
