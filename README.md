# Classes:
* object.h contains:
	* Object class representing a distinct object in our program, two objects can be compared for equality.
* queue.h contains:
	* Queue child class of Object that represents a datastructure that can hold, enqueue and dequeue objects.
	* Node is a child class of Object that represent one entry in the Queue. It has an object and a next Node.
* test-queue.cpp contains:
	* Test cases for the Object, Queue and Node classes and their member functions.

# Member Functions:
* Object class has:
	* A virtual method for checking if two objects are equal.
	* A method for generating a hash-number unique to this Object.
	* A method for printing a representation of this Object.
* Queue class has:
	* equals(), its own equality checking method.
	* enqueue(), a method that attaches an Object to the front of this queue.
	* dequeue(), a method that dettaches the last Object on this queue.
	* peek(), a method that returns the Object at the front this queue without removing it.
	* is_queue_empty(), a method that checks if this queue is empty.
	* get_queue_length(), a method that returns the number of Objects contained in this queue.
	* print_queue(), prints out a representation of the Objects contained in this queue.
* Node class has:  
	* set_next(), a method that sets the next Node.
	* get_next(), a method that returns the next Node.
	* get_object(), a method that returns this Node's Object.
	* remove_next(), a method that removes and returns the next Node.
	* has_next(), a method that returns true if there is a next Node.
	* equals(), its own equality checking method.
