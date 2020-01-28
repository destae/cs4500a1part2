//lang::CwC

#pragma once

/* Interface for Object class */
class Object {
    public:

        /*
         * Constructor.
         */
        Object()

        /*
         * Deconstructor.
         */
        virtual ~Object()

        /*
         * 
         *
         * @param other The object to check against this.
         *
         * @return true if other equates this, false if not.
         */
        virtual bool equals(Object* other)

        /*
         * Generates a hash code unique to this object.
         * 
         * @return a numberical representation of this object.
         */
        virtual size_t hash()
};