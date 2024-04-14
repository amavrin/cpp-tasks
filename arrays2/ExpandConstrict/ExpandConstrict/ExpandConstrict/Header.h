#pragma once

typedef unsigned int uint;

const int ASIZE = 6;

// Let suppose we have an ordered vector of unsigned ints of some size.
// The value order is descending, for example, [10, 4, 2, 1, 0, 0, ...].
// Positions at the end of the array containing zeros are considered "empty".

// We need 2 functions:

// pop_head() pops the first (i.e., the biggest) element, removes it from the array,
// shifts all the remaining values to front of the array.
// pop_head() returns the popped element.
// example: {10, 5, 0} => {5, 0, 0}, 10 is returned
uint pop_head(uint array[], size_t array_size);

// insert() inserts the value in the array *in order*, shifting the remaining values to the end.
// If there is no empty elements in the vector, insert() returns false and leaves the array unaltered.
// If insert succeeds, insert() returns true.
// Example: {10, 5, 0}, inserting 7 => {10, 7, 5}, true is returned
bool insert(uint array[], size_t array_size, uint new_element);

// It's worth having some additional functions and use them as auxiliary functions:

// expand() shifts elements of the vector to the end, starting with specified position.
// If there is no room in the vector, it returns false.
// If starting position is invalid (i.e. less than zero or greater than array size) expand() also returns false.
// Otherwize expand() returns true.
// Example: {4, 3, 1, 0, 0}, expand at 1 => {4, 3, 3, 1, 0}
bool expand(uint array[], size_t array_size, size_t starting_pos);

// constrict() shifts elements of the vector to the beginning, removing the first element
// Example: {5, 2, 0} => {2, 0, 0}
void constrict(uint array[], size_t array_size);

// get_free_space() returns a number of "free" elements at the end of the array
// Example: {10, 5, 0, 0, 0} => returns 3
size_t get_free_space(uint array[], size_t array_size);

// for convenience there is an array comparing function:

// equals() compares 2 arrays
bool equals(uint a1[], uint a2[], size_t size);