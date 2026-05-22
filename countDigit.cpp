// Program to count the number of digits in a given number

#include<iostream>
using namespace std;

int main(){

    char choice;
    int n;

    do{
        int count = 0; // reset every time

        cout << "Dear User, Enter your number: ";
        cin >> n;

        // Input validation
        if(cin.fail()){
            cout << "Invalid input!" << endl;
            return 1;
        }

        // Negative handling
        n = abs(n);

        // Zero case
        if(n == 0){
            count = 1;
        }
        else{
            while(n != 0){
                n = n / 10;
                count++;
            }
        }

        cout << "Number of digits in your given number is: " 
             << count << endl;

        cout << "Try again? (y/n): ";
        cin >> choice;

    }while(choice == 'y');

    return 0;
}







