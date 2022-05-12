/*********************************************
 * author: MarcioVale
 * email: mac3designer@gmail.com
 * 
 * 
 **********************************************/

#include <iostream>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;

// This comment

/*
    This is a multiple
    line
    comment
*/

//Using something comment here

int main()
{
    // use their favorite number between 1 and 100
    
    // suppose the user enters 24
    int favorite_number = 0; // my favorite number stored
    int secret_number = 24;
    
    // then display following go to the console
    
    // Amazon!! That's my favorite number too!
    // No really!, 24 is my favorite number!
    
    // Bellow are 2 sample runs of the programa
    
    // ==============================================
    // Enter your favorite number between 1 and 100: 24
    // Amazon!! That's my favorite number too!
    // No really!!, 24 is my favorite number!
    
    cout << "==============================================" << endl;
    cout << "Favorite Number Game" << endl;
    cout << "==============================================" << endl;
    
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    
    cout << "Amazon!! That's my favorite number too!" << endl;
    
    if(secret_number == favorite_number)
    {
        cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;
    }
    else
    {
        cout << "Sorry!!, " << favorite_number << " is not my favorite number!" << endl;
    }
    
    return 0;
}