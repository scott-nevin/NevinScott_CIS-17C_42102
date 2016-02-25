/* 
 * File:   RowAry.cpp
 * Author: Scott Nevin
 * Created on February 22, 2016, 8:49 PM
 */

//Include system Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Include user libraries
#include "RowAry.h"

//constructor
RowAray::RowAray(int n){
    //set size of array
    setsize(n);
    //populate array
    fillArray();
}

void RowAray::fillArray(){
    //Allocate memory
    rowData=new int[size];
    //fill array randomly
    for(int i=0;i<size;i++){
        rowData[i]=rand()%90+10;      
    }
}

void RowAray::setsize(int n){
    //Validate the size
    if(n<=2)size=2;
    else size=n;   
}