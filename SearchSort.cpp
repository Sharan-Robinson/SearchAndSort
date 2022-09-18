/*
 * SearchSort.cpp
 *
 *  Created on: Sep 4, 2022
 *      Author: Sharan Robinson
 */



#include "SearchSort.hpp"




void bubbleSort(vector<int> &vect, char order){
    bool swap;
    int temp;

    if(order == 'A'){
        do
    {
        swap = false;
        for(long unsigned int count = 0; count < (vect.size() - 1); count++){
            if(vect.at(count) > vect.at(count + 1)){

                temp = vect.at(count);
                vect.at(count) = vect.at(count + 1);
                vect.at(count + 1) = temp;
                swap = true;

            }
        }
    }while (swap);

    }else if(order == 'D'){
        do
    {
        swap = false;
        for( long unsigned int count = 0; count < (vect.size() - 1); count++){
            if(vect.at(count) < vect.at(count + 1)){

                temp = vect.at(count + 1);
                vect.at(count + 1) = vect.at(count);
                vect.at(count) = temp;
                swap = true;

            }
        }
    }while (swap);
    }else{
    	cout << "invalid input!" << endl;
    }



}

void selectSort(vector<int> &vect, char order){

		if(order == 'A'){
			long unsigned int startScan;
			int minIndex, minValue;

					for(startScan = 0; startScan < (vect.size() - 1); startScan++){
						minIndex = startScan;
						minValue = vect.at(startScan);

						for(long unsigned int index = startScan + 1; index < vect.size(); index++){
							if(vect.at(index) < minValue){
								minValue = vect.at(index);
								minIndex = index;
							}
						}
						vect.at(minIndex) = vect.at(startScan);
						vect.at(startScan) = minValue;
					}
		}else if(order == 'D'){
			long unsigned int startScan;
			int minIndex, minValue;

					for(startScan = 0; startScan < (vect.size() - 1); startScan++){
						minIndex = startScan;
						minValue = vect.at(startScan);

						for(long unsigned int index = startScan + 1; index < vect.size(); index++){
							if(vect.at(index) > minValue){
								minValue = vect.at(index);
								minIndex = index;
							}
						}
						vect.at(minIndex) = vect.at(startScan);
						vect.at(startScan) = minValue;
					}

		}else{
			cout << "Invalid input!" << endl;
		}

}

bool intLinearSearch(vector<int> &vect, int searchNumber){
	long unsigned int index = 0;
	bool found = false;

	while(index < vect.size() && !found){
		if(vect.at(index) == searchNumber){
			return true;
		}
		index++;
	}

	return false;
}

bool intBinSearch(vector<int> &vect, int searchNumber){
	bubbleSort(vect, 'A');

	int first = 0, last = vect.size() - 1, middle;
	bool found = false;

	while(!found && first <= last){
		middle = (first + last) / 2;
		if(vect.at(middle) == searchNumber){
			found = true;
			return found;
		}
		else if(vect.at(middle) > searchNumber){
			last = middle - 1;
		}
		else{
			first = middle + 1;
		}
	}

	return false;
}


