/* 
 * File:   RowAray.h
 * Author: Dr. Mark E. Lehr
 * Created on February 18, 2016, 8:54 AM
 * Specification for the RowAray
 */

#ifndef ROWARAY_H
#define	ROWARAY_H

class RowAray{
    private:
        int size;
        int *rowData;
        void fillArray();
        void setsize(int);
    public:
        RowAray(int);
        ~RowAray(){
          delete []rowData;
       }
        int getSize(){return size;}
        int getData(int i){return rowData[i];}
};

#endif	/* ROWARAY_H */