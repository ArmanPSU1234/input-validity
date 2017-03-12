//
//  input_validity.cpp
//
//
//  Purpose: Using single branched ifs to check validity of input.
//  a program that will calculate total savings by a student with his/her parents’ contribution.
//  The student’s parents have agreed to add to the student’s savings based the percentage the student saved using the schedule given below.
//          student percent       parents’ percentage
//              <5%                     1.0%
//      >=  5%  but < 10%               2.5%
//      >= 10%  but < 15%               8.0%
//      >= 15%  but < 25%            	12.5%
//      >= 25%  but < 35%            	15.0%
//           >= 35%                     20.0%
//
//  For example if the student earned $1500 and saved $150 (10%),
//  the parents would contribute $120 (8%) for a total of saving of $270.00
//
//  @author: Arman Mannan
//  @version: 09/21/2014
//
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double student_earned, student_saved, parent, total, result, parents_contri;
    
    
    cout << "How much did you earn ? \n" << endl;               //User entry
    cin >> student_earned;
    
    if (student_earned < 0 || student_earned == 0)          //Checking validation of user input
    {
        cout<< "You must have earned something! Please try agian." <<endl;
        cout<< "How much did you earn ?\n";
        cin >> student_earned;
    }
    
    cout << "How much did you save.\n" << endl;                  //User entry
    cin >> student_saved;
    
    if (student_saved > student_earned || student_saved < 0)    //Checking validation of user input
    {
        cout << "You cannot have saved a negative amount or more than you earned. Please try again" << endl;     //User entry
        cout << "How much did you save.\n" << endl;             //User entry
        cin >> student_saved;
    }
    
    result = student_saved / student_earned;                    //Calcuation to determine parents’ percentage
    
    //To determine parent's contribution to students savings
    if (result >= .35)
    {
        parent =.2;
    }
    else if (result >= .25)
    {
        parent = .15;
    }
    else if (result >= .15)
    {
        parent = .125;
    }
    else if (result >= .10)
    {
        parent = .08;
    }
    else if (result >= .5)
    {
        parent = .025;
    }
    else
    {
        parent = .01;
    }
    
    parents_contri = parent * student_earned;                   //Calculation to determine value that parent will put
    
    cout << fixed;                                              //Formating
    cout << setprecision(2);                                    //Formating
    cout << "Your parent will contribute: " << (parent * 100) << "%" << endl;
    
    total = (parents_contri + student_saved);                   //Figuring final total of parents and students savings amount
    
    cout << fixed;                                              //Formating
    cout << setprecision(2);                                    //Formating
    cout << "You have a total savings of $" << total << endl;
    
    return 0;
    
}
