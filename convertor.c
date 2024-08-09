/******************************************************************************
This program is designed to convert cents to the coin of choice of the user 
(Nickel, Quarter, or Dime).
created by: Hiva Hakimzadeh
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int const CENTS_PER_NICKEL =5;
    int const CENTS_PER_DIME=10;
    int const CENTS_PER_QUARTER=25;
    int cent, nickel, dime, quarter, choice;
    cout<<"Enter a number of cents: ";
    cin>>cent;
    cout<<"What coin would you like to see? "<<cent<<" cents in?"<<endl;
    cout<<"1. Nickels\n";
    cout<<"2. Dimes\n";
    cout<<"3. Quarters\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<cent<<" cents = " << (cent/CENTS_PER_NICKEL)<<" nickels.";
        break;
        case 2: cout<<cent<<" cents = " <<(cent/CENTS_PER_DIME)<<" dimes.";
        break;
        case 3: cout<<cent<<" cents = " <<(cent/CENTS_PER_QUARTER)<<" quarters.";
        break;
        default: cout<<"Sorry."<< choice <<" wasn't a valid choice.";
    }
    
    return 0;
}
