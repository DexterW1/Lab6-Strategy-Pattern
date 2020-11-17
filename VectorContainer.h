#ifndef __VECTORCONTAINER_H__
#define __VECTORCONTAINER_H__

#include <iostream>
#include <vector>
#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

using namespace std;

class VectorContainer : public Container {

	protected:
		vector <Base*> vcontainer;
	public:
		VectorContainer() : Container () {};
		VectorContainer (Sort* s) : Container (s) {};

		void print(){
			vector <Base*> print = vcontainer;
			for(int i=0; i<vcontainer.size(); i++){
				cout<< print[i]->evaluate();
			}
		};

		void swap(int i, int j){	
			Base* temp = vcontainer.at(i);
 			vcontainer.at(i) = vcontainer.at(j);
 			vcontainer.at(j) = temp;
		};
		void add_element(Base* element){
			vcontainer.push_back(element);
		};
		int size(){
			return vcontainer.size();
		};
		void sort(){
			if(sort_function == NULL){
				return;
			}
			sort_function->sort(this);
		};
		Base* at(int i){
			return vcontainer.at(i);
		};
		


};
#endif //__VECTORCONTAINER_H__
