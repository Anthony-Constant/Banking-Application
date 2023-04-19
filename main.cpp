#include <iostream>

//**********************************************************************************************
//AC BANKING APPLICATION
//*********************************************************************************************

#include <iostream> //std::cout
 //defines the standard devices cin, cout, clog, cerr; for more info see http://www.cplusplus.com/reference/iostream/

#include <string> //defines string types and conventions including begin & end iterator; for more info see http://www.cplusplus.com/reference/string/


#include <algorithm> //std::shuffle
//defines a collection of ranged functions; for more info see http://www.cplusplus.com/reference/algorithm/

#include <random> //std::default_random_engine
//defines random number generation facilities; for more info see http://www.cplusplus.com/reference/random/

using namespace std; //tell the compiler that by default to use the “std” – this means that we don’t need to keep saying “std::cout” we can just use: “cout”


//FEATURES and REQUIREMENTS

//STORE ID AND PIN IN GLOBAL VARIABLES
//WITHDRAW AMOUNT 
//DEPOSIT AMOUNT
//CHECK AMOUNT 
//CHECK ACCOUNT INFO 
//CLOSE SESSION 
//ADD WITHDRAW LIMIT

//CHANGELOG

// 16.07.20 Template created 
//16.07.20 - Created void Menu function to store the menu to be used in main 'Menu();' 
// 16.07.20 - Created menuOption variable to store the user's choice 
// 16.07.20 - Created main menu to accept user input and execute correct function - used a do while loop to create an endless loop until user enters '0' menuOption to quit.
//16.07.20 - Created cout string to output the interaction of menuOption within the do {} while loop
//16.07.20 - Created cin input for menuOption to store the users choice 
//16.07.20 - Created switch statement to call the correct function upon the user's choice
//19.04.21 - Fixing bugs in the withdrawAmount function
//19.04.21 - Added debugging info using cout in localString
//19.04.21 - Fixed global totalAmount variable to store global user amount
//20.04.21 all global variables have been declared to store total amount left, ID and PIN; USE FUNCTIONS TO MANIPULATE THE GLOBAL VARIABLES

// 18.07.21 - Code check.
// 18.07.21 - Removed totalAmount and replaced with global variables withdrawAmount and (wallet)depositAmount. Note: This is too have a more strict balance with the respective restrictions. 
// 18.07.21 - Modified withdrawTotalAmount and depositTotalAmount to manipulate the your depositAmount starting at 0. note: your total amount is = (wallet)depositAmount 

//BEGIN TO CREATE THE FUNCTIONS
int totalAmount = 100; //declare global variable to store overall balance
int userID;//declare global variable to store ID
int pinCode;//declare global variable to store pin
// Allow user to withdraw amount
void withdrawAmount (void) {
//Declare variables
double withdrawAmount;
cout << "\n\n Welcome to Withdraw function \n\n" <<endl;
cout << "\n Enter an amount you would like to withdraw: " <<endl;
cin >> withdrawAmount;
cout << endl;
cout << "You have entered " << withdrawAmount << " for the amount you would like to withdraw" <<endl;
if (withdrawAmount > totalAmount) {
cout << "\n Sorry your total balance is too low to withdraw the amount requested." << endl;
} else {
totalAmount = totalAmount - withdrawAmount ;
cout << "\n\nYour total balance is now: " << totalAmount << "." << endl;
}
}
// Allow user to deposit amount
void depositAmount (void) {
//Declare variables
double depositAmount;
cout << "\n\n Welcome to Deposit function \n\n" <<endl;
cout << "\n Enter an amount you would like to deposit: " <<endl;
cin >> depositAmount;
cout << endl;
cout << "You have entered " << depositAmount << " for the amount you would like to withdraw" <<endl;
totalAmount = totalAmount + depositAmount ;
cout << "\n\nYour total balance is now: " << totalAmount << "." << endl;
}
int checkAmount () {
cout << "\nYour total balance is now: " << totalAmount << "." << endl;
return 0;
}
int checkDetails () {
cout << "\n Account Information\n" << endl;
cout << "\n Your ID: " << userID << "." << endl;
cout << "\n Your PIN: " << pinCode << "." << endl;
cout << "\n Your initial total balance is: " << totalAmount << "." << endl;
return 0;
}
void QuitNow(void) { //declare the void variable 'QuitNow'
string input; //declare string input for user to enter their option
cout << " Are you sure? (Type 'Y', 'Yes' or 'y' or 'N', 'No', 'n')"; //output this message to user
cin >> input; //initialise input
if (input == "Yes" ) { //if the user enters 'Yes'
cout << "Thank you for using Ant Banking Application - please come back soon." << endl; //send this message to the user
}
else if (input == "Y" ) { //if the user enters 'Y'
cout << "Thank you for using Ant Banking Application - please come back soon." << endl; //send this message to the user
}
else if (input == "y" ) { //if the user enters 'y'
cout << "Thank you for using Ant Banking Application - please come back soon." << endl; //send this message to the user
}
else if (input == "No") { //if the user enters 'No'
cout << "\n You entered No, Return back to menuOption. \n"; //send this message to the user
return; //return user back to menuOption
}
else if (input == "N") { //if the user enters 'N'
cout << "\n You entered No, Return back to menuOption. \n"; //send this message to the user
return; //return user back to menuOption
}
else if (input == "n") { //if the user enters 'n'
cout << "\n You entered No, Return back to menuOption. \n"; //send this message to the user
return; //return user back to menuOption
}
else {
cout << "\n Invalid Input, Please try again. \n"; //if the user enters non-valid input send this message to user and return back to

return;
}
exit(EXIT_SUCCESS); //execute the c++ exit function and pass it c++ contant value called EXIT_SUCCESS; EXIT_SUCCESS is actually 0 

}
void Menu(void) { //this function displays the menu to the user
string currentId("None"); //declare and initialise the variable to hold the current ID ready to be manipulated
string modifiedId("Nothing.");
int menuOption; //declare a variable to hold the user's menu choice option
do { //starts an endless loop - this is so the code below repeats forever until quit is used
//modify output interaction of menuOption here
cout << "\n\n Welcome to AC Banking Application \n\n" << endl;//display the title for the menu
cout << "\n Select an option and hit return: \n\n" << endl; //display the title for the menu
cout << "1. Withdraw amount \n"<<endl; //display case 1
cout << "2. Deposit amount \n"<<endl; //display case 2
cout << "3. Check amount \n"<<endl; //display case 3
cout << "4. Account info \n"<<endl; //display case 4
cout << "0. Quit session \n"<<endl; //display case 0
cin >> menuOption; //store the choice made by the user in the variable menuOption
switch(menuOption) { // a 'switch' statement is similar to multiple if's statements see
https://en.cppreference.com/w/cpp/language/switch
case 1: //this basically "if the menuOption = 1". should call the withdrawAmount() function
withdrawAmount();
break;
case 2: //this basically "if the menuOption = 2". should call the depositAmount() function
depositAmount();
break;
case 3: //this basically "if the menuOption = 3". should call the checkAmount() function
checkAmount();
break;
case 4: //this basically "if the menuOption = 4". should call the checkDetails() function
checkDetails();
break;
case 0: // this basically "if the menuOption = 0", call the Quit session function
QuitNow();
break;
default:
cout << "Unfortunately, " << menuOption << " is not a valid option please try again. \n"; //this will output an alert if any invalid input by the user
}
} while(true); //this tells the computer the conditions to break the "do" loop - while true is always true and therefore will continue to an endless loop.
}
//End of user menu
int main() { //this is the required function that will automatically execute when the program is running
cout << "\n\n Creating an account \n\n";
cout << "Enter ID: ";
cin >> userID;
cout << "Enter PIN number: ";
cin >> pinCode;
cout << "\n Your ID: " << userID << "." << endl;
cout << "\n Your PIN: " << pinCode << "." << endl;
cout << "\n Your initial total balance is: " << totalAmount << "." << endl;
cout << "\n\n Account has been created! \n\n" << endl;
Menu(); //start the program Menu function
}

