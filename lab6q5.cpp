//include library
#include <iostream>
using namespace std;
int main(){
char c;
cout <<"enter a character \n";
cin>>c;
if ((c>='a'&&c<='z')||(c<='z')||(c>='A'&&c<='Z')) {
cout<<c<< "is an alphabet.";
}else{
cout <<c<<"is not an alphabet.";
}return 0;
}
