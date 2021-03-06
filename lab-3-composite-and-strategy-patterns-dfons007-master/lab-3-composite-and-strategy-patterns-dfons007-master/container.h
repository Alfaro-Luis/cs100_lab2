#ifndef __CONTAINER_H__
#define __CONTAINER_H__

/*
	Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022
	Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
	CS100 Lab 1 - Composite and Strategy
*/

#include "component.h"

class Sort;

class Container {
    protected: 
		Sort* sort_function;
    public: 
        /* Cosntructors */
		Container() : sort_function(NULL) { }
		Container(Sort* function); 

        /* Non Virtual Functions */
        // Set the type of sorting algorithm
        void set_sort_function(Sort* sort_type); 

        /* Pure Virtual Functions */
        // insert the top pointer of the tree into the container
		virtual void add_element(base* element) = 0;
        // iterate through the trees and output values
		virtual void print() = 0;
        // calls on the previously set sorting-algorithm. 
        // Check if sort_function is not null, throw exception if is null
		virtual void sort() = 0;

        /* Essentially the only functions needed to sort */
        // switch tree locations
		virtual void swap(int i,int j) = 0;
        // get top pointer of tree at index i
		virtual base* at(int i) = 0;
        // return container size;
		virtual int size() = 0;
};


#endif // __CONTAINER_H__
