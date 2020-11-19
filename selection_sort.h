#ifndef __SELECTIONSORT_H_
#define __SELECTIONSORT_H_

#include "sort.hpp"
#include "container.hpp"

class SelectionSort : public Sort {
	public:
		SelectionSort() : Sort() {};

		void sort(Container* container){
		 	int i,j,first;
  			int numLength = container->size();
  			for (i = numLength -1; i>0;i--){
    				first = 0;
    				for(j = 1;j<=i;j++){
      					if(container->at(j)->evaluate() > container->at(first)->evaluate()){
      						first = j;
					}
    				}
    			container->swap(first,i);
  			}			
		};


};
#endif //__SELECTIONSORT_H_
