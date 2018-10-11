// Emily Gorman
// 10/10/2018
// Lab04: Experimenting with vectors and iteration

#include <iostream>
#include "VectorDriver.h"
#include <algorithm>

bool sortfunction(int i, int j) { return (i < j); } //  function that allow for sorting

struct sortclass {                                      // class that returns an object to insert in our sort routine
	bool operator() (int i, int j) { return (i < j); }
} vecobject;

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);
	vector<short> empty_vector;
	vector<short> small_vector{ 12, 9, 3, 20, 15 };
	srand((ulong)time(0));

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;

	cout << "sorted vector: ";
	sort(small_vector.begin(), small_vector.end(), vecobject);
	for (std::vector<short>::iterator it = small_vector.begin(); it != small_vector.end(); ++it) // sort routine to order small vector
		std::cout << ' ' << *it;              // outputs sorted vector
	std::cout << '\n';

	cout << "does the sorted vector contain 3?: " << is_present(small_vector, 3) << endl; // test of is_present

	add_numbers(empty_vector);               // test of add_numbers
	cout << "vector with random number: ";
	print(empty_vector);
	cout << endl;

	cout << "random vector with only numbers in an even index: ";
	print_even(empty_vector);                                    // test of print_even

	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;


	system("pause");
	return 0;
}
