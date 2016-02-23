/* 
 * File:   Table.h
 * Author: Scott Nevin
 *
 * Created on February 22, 2016, 8:48 PM
 */

#ifndef TABLE_H
#define	TABLE_H

class Table{
    private:
       int *data;
       int size;
       void fillArray(); //utility function
       void setsize(int);//Another utility function
   public:
       Array1D(int);
       ~Array1D(){
           delete []data;
       }
       void prntArray(int);
};

#endif	/* TABLE_H */

