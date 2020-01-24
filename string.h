//lang::CwC

#pragma once
#include "object.h"

/*
 * Class representing a string of characters, child of the Object class
 */
class String : public Object {
	public:

		/*
		 * Constructor
		 *
		 * @param str the pointer to the characters in this String
		 */
		String(const char* str) : Object()

		/*
		 * Deconstructor
		 */
		~String()

		/*
		 * Getter for this String's char*
		 *
		 * @return this class's char* field
		 */
		char* get_chars()

		/*
		 * The length of this String
		 *
		 * @return the length
		 */
		size_t length()

		/*
		 * Is this String equal to the given Object?
		 *
		 * @param o the Object to be compared
		 *
		 * @return true if the two are equal, false if they are not
		 */
		bool equals(Object* o)

		/*
		 * Returns a hash value unique to this String
		 *
		 * @return the hash
		 */
		size_t hash_me()

		/*
		 * Compares this String to the given one
		 *
		 * @param other The String to be compared with this one
		 *
		 * @return 	-1 if this String has a smaller lexicographic value, 0 if they have an equal value, and 1 if this
		 * 			String has a larger value
		 */
		int compare(String* other)

		/*
		 * Concatenates this String with the given one, and returns the result as a new String.
		 *
		 * @param other The String to be appended to the end of this one
		 *
		 * @return A new String with the result of concatenating the two Strings
		 */
		String* concat(String* other)
};
