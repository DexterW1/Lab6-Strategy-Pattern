#ifndef __LISTCONTAINER_H__
#define __LISTCONTAINER_H__

#include <iostream>
#include <list>
#include <iterator>
#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

using namespace std;

class ListContainer : public Container {

	protected: 
		list <Base*> L;
	public:
		ListContainer() : Container() {};
		ListContainer(Sort* s) : Container(s) {};
	
		void print(){
			list <Base*> :: iterator it;
			for(it = L.begin(); it != L.end(); ++it) {
			        cout << (*it)->evaluate()<< "->";
			}	
		};

		void add_element(Base* element)
		{
			L.push_back(element);
	
		};

		void swap(int i, int j)
		{

			
			std::list<Base*>::iterator it = L.begin();
			std::list<Base*>::iterator it2 = L.begin();
				

			
			std::advance(it, i);
			std::advance(it2, j);
				
			std::swap(*it, *it2); 
			/*	
		
			cout << " PRE SWAP \n" <<  it->evaluate();
			cout << endl << it2->evaluate() << endl;
			list<Base*>::iterator temp = it;
			
			*it = *it2;
			*it2 = *temp;
			cout << " POST SWAP \n" << *it->evaluate();
                        cout << endl << *it2->evaluate() << endl;
			*/

		};
		
		int size() { 
			list<Base*> :: iterator it;
			int count = 0;
			for(it = L.begin(); it != L.end(); it++)
			{ count++; }			
				
			return count;
		};


		void sort()
		{
			if(sort_function == NULL){
				return;
			}
			sort_function->sort(this);
		};

		Base* at(int i)
		{
			list<Base*>:: iterator it = L.begin();
			advance(it, i);
			return *it;
	
		};
		

		
		

};



#endif
