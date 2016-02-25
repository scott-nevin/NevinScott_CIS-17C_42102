/* 
 * File:   Table.cpp
 * Author: Scott Nevin
 * Created on February 22, 2016, 8:49 PM
 */

//Include system Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Include user libraries
#include "Table.h"
#include "RowAry.h"

//constructor
Table::Table(int r, int c){
    //set number of rows and columns
    szRow = r;
    szCol = c;
}

int Table::getData(int r,int c){
    //get data to return
    return columns[r]->getData(c);
}
