//include library
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number till where natural numbers are to be print" <<endl;
cin>>n;
cout<<"the natural numbers till " <<n<<" are"<< endl;
int i = 1;
while (i<=n) {
cout << i<< endl;
++i;
}
return 0;
}
