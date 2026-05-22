//programm  to Count the number of digits in a given number
#include<iostream>
using namespace std;
int main(){

int count=0;
int n;
cout<<" Dear User,Enter your  number: ";

cin>>n;
while(n!=0){
    n=n/10;
    count++;

}







cout<<"Number of digits in your given number is: "<<count<<endl;
}