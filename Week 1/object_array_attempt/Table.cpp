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
Table::Table(int n){
    //First set the size
    setsize(n);
    //Fill the array
    fillArray();
}

void Table::setsize(int n){
    //Validate the size
    if(n<=2)size=2;
    else size=n;   
}

void Table::fillArray(){
    //Allocate memory
    data=new int[size];
    //fill array randomly
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;      
    }
}

void Table::prntArray(int perLine){
    //print array
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
  
