Spencer LaChance & David Mberingabo

# Classes:
* object.h contains:
	* Object class representing a distinct object in our program, two objects can be compared for equality.
* string.h contains:
	* String class which is a wrapper for a char*
* queue.h contains:
	* Queue child class of Object that represents a datastructure that can hold, enqueue and dequeue objects.
* test-queue.cpp contains:
	* Test cases for the Object, Queue, and String classes and their member functions.

# Member Functions:
* Object class has:
	* `equals(Object* other)` for checking if two objects are equal.
	* `hash()` for generating a hash-number unique to this Object.
	* `to_string()` that returns a char* representation of the Object.
	* `print()` for printing a representation of this Object to the console.
* String class has:
	* `size()` which gives the length of the String.
	* `equals(Object* other)` for checking if the String is equal to a given Object.
	* `compare(String* other)` for lexicographically comparing two String.
	* `hash()` for generating a unique hash code for this String.
	* `concat(String* other)` for concatenating two Strings into one.
	* `to_string()` which returns the char* representation of this String.
	* `print()` which prints this String to the console.
* Queue class has:
	* `equals()`, its own equality checking method.
	* `enqueue()`, a method that attaches an Object to the front of this queue.
	* `dequeue()`, a method that dettaches the last Object on this queue.
	* `peek()`, a method that returns the Object at the front this queue without removing it.
	* `is_queue_empty()`, a method that checks if this queue is empty.
	* `get_queue_length()`, a method that returns the number of Objects contained in this queue.
	* `print_queue()`, prints out a representation of the Objects contained in this queue.
