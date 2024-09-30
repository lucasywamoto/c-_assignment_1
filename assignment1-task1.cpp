//  main.cpp
//  assignment1-task1


#include <iostream>
using namespace std;

int main() {
    int option = 0;
    
    //exit option is 4, while option value is different than 4 show menu
    while (option != 4) {
        
        //selection menu
        cout << "--- Menu ---" << endl;
        cout << "1 - Collect Personal Information" << endl;
        cout << "2 - Calculate Future Age" << endl;
        cout << "3 - Favorite Number Analysis" << endl;
        cout << "4 - Exit" << endl;

        //get option from user
        cout << "Option: ";
        cin >> option;
        cout << endl;
        
        //switch case for menu option
        switch (option) {
            //option 1: Collect Personal Information
            case 1: {
                //get personal infos
                string name;
                int age, number;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter your age: ";
                cin >> age;
                cout << "Enter your favorite number: ";
                cin >> number;
                
                //display formatted infos
                cout << endl << "Hello " << name << ", you are " << age << " years old." << endl;
                cout << "Your favorite number is " << number << "." << endl;
                break;
            }
            //option 2: Calculate Future Age
            case 2: {
                //get year of birth and set current year (hard coded)
                int yearOfBirth, age;
                int currentYear = 2024;
                cout << "Enter your year of birth: ";
                cin >> yearOfBirth;
                age = currentYear - yearOfBirth; //calculate age
                
                //display what is age now and in 10 years
                cout << endl << "You are " << age << " years old." << endl;
                cout << "In 10 years, you will be " << age + 10 << " years old." << endl;
                break;
            }
            //option 3: Favorite Number Analysis
            case 3: {
                //ask for favorite number and set highest and lowest number initially equal favorite number
                int favNum, highestNum, lowestNum;
                cout << "Enter your favorite number: ";
                cin >> favNum;
                cout << endl;
                highestNum = favNum;
                lowestNum = favNum;
                
                char enterNext;
                //display different output based whether the number is even or odd and then ask if user wants to enter another number (will run at least once using do-while)
                do {
                    //check if number is even or odd
                    if (favNum % 2 == 0) {
                        cout << "Your favorite number is " << favNum << ", which is even." << endl;
                        cout << "The square of your favorite number is " << favNum * favNum << endl; //calculate square
                    } else {
                        cout << "Your favorite number is " << favNum << ", which is odd." << endl;
                        cout << "The cube of your favorite number is " << favNum * favNum * favNum << endl; //calculate cube
                    }
                    cout << "Do you want to enter another favorite number? (y/n): ";
                    cin >> enterNext;
                    cout << endl;
                    //check for another entry
                    if (enterNext == 'y') {
                        cout << "Enter your favorite number: ";
                        cin >> favNum;
                        //check if new favorite number is higher or lower than current values;
                        if (favNum > highestNum) highestNum = favNum;
                        if (favNum < lowestNum) lowestNum = favNum;
                    }
                } while (enterNext == 'y');
                
                cout << "The highest favorite number entered is " << highestNum << endl;
                cout << "The lowest favorite number entered is " << lowestNum << endl;
                break;
            }
            //option 4: Exit
            case 4: {
                cout << "~~ Bye! ~~" << endl;
                break;
            }
            //default: Show error message
            default: {
                cout << "Invalid option. Try again." << endl;
                break;
            }
        }
        cout << endl;
    }
}
