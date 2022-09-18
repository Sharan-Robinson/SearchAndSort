/*
 * SearchSort.hpp
 *
 *  Created on: Sep 4, 2022
 *      Author: Sharan Robinson
 */

#ifndef SEARCHSORT_HPP_
#define SEARCHSORT_HPP_

#include <vector>
#include <iostream>
#include <cstring>

using namespace std;


void bubbleSort(vector<int> &vect, char order);
void selectSort(vector<int> &vect, char order);
bool intLinearSearch(vector<int> &vect, int searchNumber);
bool intBinSearch(vector<int> &vect, int searchNumber);




#endif /* SEARCHSORT_HPP_ */


