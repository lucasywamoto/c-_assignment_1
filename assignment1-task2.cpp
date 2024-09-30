//  main.cpp
//  assignment1-task2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double monthlyAmount, yearlyInterestRate;
    double futureValue = 0;
    int investmentYears;
    cout << fixed << setprecision(2);
    
    char nextInvestment;
    
    do {
        cout << "Enter your monthly investment: ";
        cin >> monthlyAmount;
        cout << "Enter yearly interest rate (in %): ";
        cin >> yearlyInterestRate;
        cout << "Enter number of years: ";
        cin >> investmentYears;
        cout << endl;
        
        double monthlyInterestRate = (yearlyInterestRate / 100) /12;
        
        for (int year = 1; year <= investmentYears; year++) {
            for (int month = 1 + ((year - 1) * 12); month <= year * 12; month++) {
                futureValue += monthlyAmount * pow(1 + monthlyInterestRate, month);
            }
            cout << "Year " << year << " Future Value: $" << futureValue << endl;
        }
        
        cout << endl << "Do you want to enter another investment scenario? (y/n): ";
        cin >> nextInvestment;
    } while (nextInvestment == 'y');
    
    double curSalary;
    cout << endl << "Enter your current salary: $";
    cin >> curSalary;
    cout << "Net Salary after 13% tax: $" << curSalary - curSalary * 0.13 << endl;
    
    int workYears;
    cout << endl << "How many years have you been working at the company? ";
    cin >> workYears;
    cout << "Enter your current salary: $";
    cin >> curSalary;
    if (workYears > 5) {
        cout << "Congratulation! You've been approved for a salary increase." << endl;
        cout << "Your new salary is: $" << curSalary + curSalary * 0.2 << endl;
    } else {
        cout << "You haven't achieved the minimum years of work for a salary increase." << endl;
        cout << "Your salary will remain: $" << curSalary << endl;
    }
    
}
