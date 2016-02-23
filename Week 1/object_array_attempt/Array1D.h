/* 
 * File:   Array1D.h
 * Author: Scott Nevin
 *
 * Created on February 22, 2016, 8:53 PM
 */

#ifndef ARRAY1D_H
#define	ARRAY1D_H

class Array1D{
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
      
};

#endif	/* ARRAY1D_H */

