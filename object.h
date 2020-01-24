//lang::CwC

#pragma once

/* Interface for Object class */
class Object {
    public:

        /* Constructor.
         *
        */
        Object()

        /* Deconstructor.
         *
        */
        virtual ~Object()

        /*
         *@param other is the object to check against this.
         *@returns bool true if other equates this, false if not.
        */
        virtual bool equals(Object* other)

        /*
         *@returns size_t a number representation unique to this object.
        */
        size_t hash()

        /*
         *@returns size_t a number representation unique to this object.
        */
        virtual size_t hash_me()

        /*
         * prints a string representation of this object to console.
        */
        void print_object()
};