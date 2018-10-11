/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <ctime>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i < data.size(); i++) {
		data.at(i) = i;
	}
}

void add_numbers(vector<short> &data)  //function meant to add randoms numbers to a vector
{

	for (ulong i = 0; i < 10; i++) // loops adds 10 numbers
	{
		ulong r = rand() % 100 + 1;  // r equals random range of numbers 0 to 100
		data.push_back(r); // adds r to the vector
	}
}

void print_even(const vector<short>& data)    // prints the even numbers of a vector
{
	ulong check;
	if (data.empty()) {                       // checks to see if the vector is empty
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);                // prints the element at index 0
		for (ulong i = 1; i < data.size(); i++)   // loops through vector
		{
			check = i % 2;                         // checks to see if the index is even
			if (check == 0) {                      // if it is then the element is printed
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}

bool is_present(const vector<short> &data, short value)  // function to see if an element is present
{
	std::vector<short>::const_iterator iter = data.begin(); // sets up iteration
	while (iter != data.end()) {   // loops through vector
		if (*iter == value)        // if iter is equal to the sought element we return true
		{
			return true;
		}
		iter++;  // iteration continues
	}
	return false;     //if not found it returns false
}
// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function
