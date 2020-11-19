#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__

#include "sort.hpp"
#include "container.hpp"


class BubbleSort : public Sort
{

public: 

BubbleSort() : Sort() {};

void sort(Container* container)
{
	int i, j, flag = 1;
	int numLength = container->size();

	for(i = 1; i < (numLength - 1); i++)
	{
	
	flag = 0;
	for(j=0; j < (numLength - 1); j++)
	{
		if(container->at(j+1)->evaluate()  > container->at(j)->evaluate())
		{
			container->swap(j, j+1);
			flag = 1;		
		 }
	}
	}
};


};

#endif
