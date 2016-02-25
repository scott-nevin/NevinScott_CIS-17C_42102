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

//constructor
Table::Table(int r, int c){
    //set number of rows and columns
    szRow = r;
    szCol = c;
    
    //populate array
    fillArray(r,c);
}

void Table::fillArray(int size, int rows){
    //Allocate memory
    columns=new RowAray *[size];
    //fill array randomly
    for(int i=0;i<size;i++){
        columns[i]= new RowAray(rows);      
    }
}

int Table::getData(int r,int c){
    //get data to return
    return columns[r]->RowAray::getData(c);
}
