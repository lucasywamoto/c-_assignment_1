//  main.cpp
//  assignment1-task2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    //monthly investment calculator
    double monthlyAmount, yearlyInterestRate;
    double futureValue = 0;
    int investmentYears;
    //output values with 2 decimals
    cout << fixed << setprecision(2);
    
    char nextInvestment;
    
    do {
        //ask for investment infos
        cout << "Enter your monthly investment: ";
        cin >> monthlyAmount;
        cout << "Enter yearly interest rate (in %): ";
        cin >> yearlyInterestRate;
        cout << "Enter number of years: ";
        cin >> investmentYears;
        cout << endl;
        
        //calculate monthly interest based on year interest
        double monthlyInterestRate = (yearlyInterestRate / 100) /12;
        
        //loop for the amount of years
        for (int year = 1; year <= investmentYears; year++) {
            //loop for the amount of months
            for (int month = 1 + ((year - 1) * 12); month <= year * 12; month++) {
                //calculate future value for each month
                futureValue += monthlyAmount * pow(1 + monthlyInterestRate, month);
            }
            //display future value at the end of each year
            cout << "Year " << year << " Future Value: $" << futureValue << endl;
        }
        
        //check for another investment scenario
        cout << endl << "Do you want to enter another investment scenario? (y/n): ";
        cin >> nextInvestment;
    } while (nextInvestment == 'y');
    
    //salary tax calculation
    double curSalary;
    cout << endl << "Enter your current salary: $";
    cin >> curSalary;
    //show salary after tax deduction
    cout << "Net Salary after 13% tax: $" << curSalary - curSalary * 0.13 << endl;
    
    //salary increase evaluation
    int workYears;
    cout << endl << "How many years have you been working at the company? ";
    cin >> workYears;
    cout << "Enter your current salary: $";
    cin >> curSalary;
    //if more than 5 years give 20% increase, otherwise keep the same
    if (workYears > 5) {
        cout << "Congratulation! You've been approved for a salary increase." << endl;
        cout << "Your new salary is: $" << curSalary + curSalary * 0.2 << endl;
    } else {
        cout << "You haven't achieved the minimum years of work for a salary increase." << endl;
        cout << "Your salary will remain: $" << curSalary << endl;
    }
    
}
