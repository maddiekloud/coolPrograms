#include <iostream>
#include <string>
using namespace std;
/* This program prints out an alphabetical triangle given a user input for height.
The number of rows of the alphabetical triangle is equal to the user input for height. 
*/
int main(){
    int height;
    int count = 97;
    cout << "Enter the height:" << endl;
    cin >> height;
    //check if user input is valid, height must be a positive integer
    if(height<=0){
        cout << "Invalid input." << endl;
    }
    //create alphabetical triangle
    for(int i=1; i<=height*2;i+=2){ //corresponds to number of rows
        for(int j=1; j<=i;j++){ //corresponds to number of letters in the column
            cout << char(count); //print out letters
            count++;
            if(count>122){ //restart alphabet. Once it reaches z, start at a again
                count = 97;
            }
        }
        cout << endl; //go to next line after row is printed out, start new row
    }
    return 0;
}