// lang::CwC

#include "object.h"
#include "queue.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

void FAIL() { exit(1); }
void OK(const char *m) { printf("%s: Test Success\n", m); }
void t_true(bool p) {
  if (!p)
    FAIL();
}
void t_false(bool p) {
  if (p)
    FAIL();
}

// Test cases for the Queue & Object classes & member functions.
void test_queue_object_classes() {
  Queue *q = new Queue();
  Queue *p = new Queue();
  Object *o = new Object();
  Object *o1 = new Object();

  t_true(q->is_queue_empty());

  q->enqueue(o);
  t_false(q->is_queue_empty());

  q->enqueue(o1);
  // q is now [o1, o]

  p->enqueue(o1);
  // p now is [o1]
  t_false(p->equals(q));

  q->dequeue();
  // q now is [o1]
  t_true(p->equals(q));

  q->enqueue(o);
  // q now is [o, o1]

  t_true(q->get_queue_length() == 2);

  Object *peeked_q = q->peek(); // = Object o1
  Object *peeked_p = p->peek(); // = Object o1

  t_true(peeked_q->equals(peeked_p));
  t_true(peeked_q->hash() == peeked_p->hash());

  OK("Object Queue");
}

// Test cases for the Queue & String classes & member functions.
void test_queue_string_classes() {
  Queue *q = new Queue();
  Queue *p = new Queue();
  String *s1 = new String("Howdy");
  String *s2 = new String("Partner");

  q->enqueue(s2);
  t_false(q->is_queue_empty());

  q->enqueue(s1);
  // q is now [s1, s2]

  p->enqueue(s1);
  // p now is [s1]
  t_false(p->equals(q));

  q->dequeue();
  // q now is [s1]
  t_true(p->equals(q));

  q->enqueue(s2);
  // q now is [s2, s1]

  t_true(q->get_queue_length() == 2);

  Object *peeked_q = q->peek(); // = String s1
  Object *peeked_p = p->peek(); // = String s1

  t_true(peeked_q->equals(peeked_p));
  t_true(peeked_q->hash() == peeked_p->hash());

  OK("String Queue");
}

void test_string_class() {
  String *s = new String("Hello ");
  String *s1 = new String("World.");
  String *s2 = new String("Hello World.");
  String *s3 = new String("H");
  String *s4 = s->concat(s1);

  t_true(s4->equals(s2));
  t_false(s->equals(s1));

  t_true(s->compare(s1) == -1);
  t_true(s2->compare(s3) == 1);
  t_true(s2->compare(s4) == 0);

  OK("String");
}

int main() {
  test_queue_object_classes();
  test_queue_string_classes();
  test_string_class();
  return 0;
}
