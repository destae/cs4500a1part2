//lang::CwC

#pragma once

#include "object.h"

//Interface for Node class, a child of Object.
class Node : public Object {
    public:
        /* 
         * Constructor.
         */
        Node(Object* o)

        /* 
         * Deconstructor.
         */
        ~Node()

        /*
         * Sets the next Node.
         *
         * @param n is a Node to be set as the next Node in this Node.
         */
        void set_next(Node* n)

        /*
         * Gets the next Node.
         *
         * @return Node* this Node's next Node.
         */
        Node* get_next()

        /*
         * Gets this Node's object.
         *
         * @return Object* this Node's object.
         */
        Object* get_object()

        /*
         * Removes this Node's next Node.
         *
         * @return Node* This Node's next Node, that has just been removed.
         */
        Node* remove_next()

        /*
         * Does this Node have another one after it?
         * 
         * @return bool True if this Node has a next Node, false if not.
         */
        bool has_next()

        /*
         * Is this Node equal to the given Object?
         * 
         * @param other is the object to check against this Node.
         * 
         * @return bool True if other equates this Node, false if not.
         */
        bool equals(Object* other)

        /*
         * Generates a hash code unique to this Queue.
         */
        size_t hash()
};
