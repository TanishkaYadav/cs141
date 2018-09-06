//include library
#include <iostream>
using namespace std;
int main(){
//number of rows 
int n=5;
int i,j;

    for (int i=0; i< n ; i++) {
//print spaces
for ( j=i; j<n; j++) {
cout << " ";
}
//print n stars
for ( j = 0 ; j<n; j++) {
cout << "*";
}
 cout << endl; 
}
return 0;
}
