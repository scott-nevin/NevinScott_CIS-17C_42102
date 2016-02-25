/* 
 * File:   Table.h
 * Author: Scott Nevin
 *
 /* 
 * File:   Table.h
 * Author: Dr. Mark E. Lehr
 * Created on February 18, 2016, 8:54 AM
 * Specification for the Table
 */

#ifndef TABLE_H
#define	TABLE_H

#include "RowAry.h"

class Table{
    private:
        int szRow;
        int szCol;
        void fillArray(int,int);
        RowAray **columns;
    public:
        Table(int,int);
        ~Table(){
           delete []columns;
       }
        int getSzRow(){return szRow;}
        int getSzCol(){return szCol;}
        int getData(int,int);
};

#endif	/* TABLE_H */