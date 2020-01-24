//lang::CwC

#include <stdlib.h>
#include "object.h"
#include "queue.h"
#include "string.h"
using namespace std;

void FAIL() {   exit(1);    }
void OK(const char* m) { /** print m */ }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

//Test cases for the Queue & Object classes & member functions.
void test_queue_object_classes(){
    Queue* q = new Queue();
    Queue* p = new Queue();
    Object* o = new Object();
    Object* o1 = new Object();

    t_true(q->is_queue_empty());
    q->print_queue(); //expected to print an empty queue as []

    q->enqueue(o);
    t_false(q->is_queue_empty());

    q->enqueue(o1);
    q->print_queue(); //expected to print [o1, o]

    p->enqueue(o);
    //p now is [o]
    t_false(p->equals(q));

    q->dequeue();
    // q now is [o1]
    t_true(p->equals(q));

    q->enqueue(o);
    //q now is [o, o1]

    t_true(q->get_queue_length == 2);

    Object* peeked_q = q->peek(); // = Object o
    Object* peeked_p = p->peek(); // = Object o

    t_true(peeked_q->equals(peeked_p));
    t_true(peeked_q->hash() == peeked_p->hash());
    peeked_q->print_object(); // Expected to print Object o
}

//Test cases for the Queue & String classes & member functions.
void test_queue_string_classes(){
    Queue* q = new Queue();
    Queue* p = new Queue();
    String* s1 = new String("Howdy");
    String* s2 = new String("Partner");

    q->enqueue(s1);
    t_false(q->is_queue_empty());

    q->enqueue(s2);
    q->print_queue(); //expected to print [s2, s1]

    p->enqueue(s2);
    //p now is [s2]
    t_false(p->equals(q));

    q->dequeue();
    // q now is [s2]
    t_true(p->equals(q));

    q->enqueue(s1);
    //q now is [s1, s2]

    t_true(q->get_queue_length == 2);

    Object* peeked_q = q->peek(); // = String s1
    Object* peeked_p = p->peek(); // = String s2

    t_false(peeked_q->equals(peeked_p));
    t_false(peeked_q->hash() == peeked_p->hash());
    peeked_q->print_object(); // Expected to print String s1
}

void test_string_class(){
    String* s = new String("Hello ");
    String* s1 = new String("World.");
    String* s2 = new String("Hello World.");
    String* s3 = new String("H");

    s->concat(s1);

    t_true(s->equals(s2));
    t_false(s->equals(s1));

    t_true(s->get_chars() == s2->get_chars());
    t_false(s->get_chars() == s1->get_chars());

    t_true(s->length() == s1->length());
    t_false(s->length() == s2->length());

    t_true(s->compare(s1) == -1);
    t_true(s2->compare(s3) == 1);
    t_true(s2->compare(s) == 0);
}

//Test cases for the Node class & member functions.
void test_node_class(){
    Object* o = new Object();
    Object* o1 = new Object();
    Node* n = new Node(o);
    Node* n1 = new Node(o1);
    Node* n2 = new Node(o);
    Node* n3 = new Node(o);

    t_false(n->get_object()->equals(n1->get_object()));
    t_true(n->get_object()->equals(n2->get_object()));

    n->set_next(n1);
    n1->set_next(n3);
    n2->set_next(n1);

    t_false(n->equals(n1));
    t_true(n->equals(n2));

    n1->set_next(n1);// Throws an error, trying to set itself as next Node

    n2->remove_next();
    t_false(n->get_next()->equals(n2->get_next())); //n & n2 have same object, but n has a next and n2 doesnt have a next

    n->remove_next();
    t_true(n->get_next()->equals(n2->get_next())); //n & n2 have same object, and each have no next

    t_false(n->has_next());
    t_true(n1->has_next());
}

int main() {
    test_queue_object_classes();
    test_node_class();
    return 0;
}
