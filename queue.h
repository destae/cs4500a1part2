//lang::CwC

#include "object.h"

//Interface for Queue class, a child of the Object class.
class Queue : public Object{
    public:
        /* 
         * Constructor.
         */
        Queue()

        /*
         * Deconstructor.
         */
        ~Queue()

        /*
         * Is this Queue equal to the given Object?
         * 
         * @param other is the object to check against this Queue.
         * 
         * @returns bool true if other equates this Queue, false if not.
        */
        bool equals(Object* other)

        /*
         * Adds o to the rear of this Queue.
         *
         * @param o is the object to add to this Queue.
         */
        void enqueue(Object* o)

        /*
         * Removes the Object at the front of this Queue.
         *
         * @return Object* at the front of this Queue.
        */
        Object* dequeue()

        /*
         * Returns the object at the front of this Queue without
         * removing it.
         * 
         * @return Object* at the front of this Queue.
         */
        Object* peek()

        /*
         * Is this Queue empty?
         * 
         * @return bool True if this Queue is empty, false if not.
         */
        bool is_queue_empty()

        /*
         * Returns the length of this Queue.
         * 
         * @return int number of elements in this Queue.
         */
        int get_queue_length()

        /*
         * Generates a hash code unique to this Queue.
         */
        size_t hash()
};

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
