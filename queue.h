//lang::CwC

#include "object.h"

//Interface for Queue class, a child of the Object class.
class Queue : public Object{
    public:
        /* Constructor.
         *
        */
        Queue()

        /* Deconstructor.
         *
        */
        ~Queue()

        /*
         *@param other is the object to check against this Queue.
         *@returns bool true if other equates this Queue, false if not.
        */
        bool equals(Object* other)

        /*
         * adds o to the front of this Queue.
         *
         *@param o is the object to enqueue to this Queue.
        */
        void enqueue(Object* o)

        /*
         * Removes the last Object from this Queue.
         *
         *@return Object* at the end of this Queue.
        */
        Object* dequeue()

        /*
         *
         *@return Object* at the front of this Queue.
        */
        Object* peek()

        /*
         *
         *@return bool true if this Queue is empty, false if not.
        */
        bool is_queue_empty()

        /*
         *
         *@return int number of elements in this Queue.
        */
        int get_queue_length()

        /*
         * Prints all the objects held in this Queue.
        */
        void print_queue()
};

//Interface for Node class, a child of Object.
class Node : public Object {
    public:
        /* Constructor.
         *
        */
        Node(Object* o)

        /* Deconstructor.
         *
        */
        ~Node()

        /*
         * Sets the next Node.
         *
         *@param n is a Node to be set as the next Node in this Node.
        */
        void set_next(Node* n)

        /*
         * Gets the next Node.
         *
         *@return Node* this Node's next Node.
        */
        Node* get_next()

        /*
         * Gets this Node's object.
         *
         *@return Object* this Node's object.
        */
        Object* get_object()

        /*
         * Removes this Node's next Node.
         *
         *@return Node* this Node's next Node, that has just been removed.
        */
        Node* remove_next()

        /*
         *
         *@return bool true if this Node has a next Node, false if not.
        */
        bool has_next()

        /*
         *@param other is the object to check against this Node.
         *@returns bool true if other equates this Node, false if not.
        */
        bool equals(Object* other)
};
