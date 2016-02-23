/* 
 * Project: Object array attempt
 * File:   main.cpp
 * Author: Scott Nevin
 * Purpose: Attempt to create array of objects 2D array of numbers
 * Created on February 22, 2016, 8:25 PM
 */


//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries
#include "Table.h"

//Global variables or constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    Table myArray(100);
    //print the array
    myArray.prntArray(10);
    //Exit the program
    return 0;
}