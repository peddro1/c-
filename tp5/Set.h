#ifndef SET_H
#define SET_H

template <typename T>

class Set {

public:
  /**
   * Construct an empty set {}
   */
  Set();

  /**
   * Construct a singleton {x}
   */
  Set(T x);

  /**
   * Remove all elements from the set (i.e. make it empty)
   */
  void clear();

  //~Set();

  bool isEmpty() const;

  /**
   * Send all elements to an output stream.
   *
   * @param out An output stream
   *
   * @return the output stream parameter
   */
  std::ostream & flush(std::ostream & out) const;

  /**
   * Check if a T belongs to the set
   *
   * @param x a T
   *
   * @return true if x belongs to the set
   */
  bool contains(T x) const;

  /**
   * Check inclusion
   *
   * @param e a set
   *
   * @return true if this set is included in the set e
   */
  bool isSubsetOf(const Set & other) const;

  /**
   * Insert an element in the set (if not already present)
   *
   * @param x a T to be inserted
   */
  void insert(T x);

  /**
   * Remove an element from the set
   *
   * @param x a T to be removed from the set
   */
  void remove(T x);

  /**
   * Insert all elements into another set
   *
   * @param other another set
   */
  void insertInto(Set & other) const;

  /**
   * Remove this set from another set (i.e., other=other-this).
   *
   * @param other a set
   */
  void removeFrom(Set & other) const;

  /**
   * Assigment operator
   *
   * @param other a set
   *
   * @return a reference to this
   */
  Set & operator=(const Set & other);

  /**
   * Copy constructor
   *
   * @param other a set
   */
  Set(const Set & other);

  /**
   * @brief Compute the image of a set by a function
   */
  friend Set image(const Set & set, T (*function)(T));

private:
 
    class Node {
        
    public:
        Node(T value, Node * next = nullptr);
        //~Node();
        T getValue() const;
        Node * getNext() const;
        void setNext(Node * next);

    private:
        T value;
        Node * next;
    };

    Node * list;

    /**
    * Recursive method to remove the first occurence of a T
    * from a linked list
    *
    * @param list a linked list of nodes
    * @param x an element to be removed
    *
    * @return the list without x
    */
    static Node * remove(Node * list, T x);
};

    
   
// /**
//  * Operator << for sets of Ts
//  *
//  * @param out an output stream
//  * @param s a set of Ts
//  *
//  * @return the output stream
//  */
// std::ostream & operator<<(std::ostream & out, const Set & s);

// /**
//  * Create a singleton with a given element
//  *
//  * @param x a T
//  *
//  * @return the singleton {x}
//  */
// Set singleton(T x);

// /**
//  * Create an empty set
//  *
//  * @return the empty set {}
//  */
// Set emptySet();

// /**
//  * Check if two sets are equal
//  *
//  * @param a a set
//  * @param b a set
//  * @return true if a=b (i.e., a is in b and b is in a), otherwise false
//  */
// bool operator==(const Set & a, const Set & b);

// /**
//  * Check if a set in included in another one.
//  *
//  * @param a a set
//  * @param b a set
//  * @return true if a is included in b
//  */
// bool operator<(const Set & a, const Set & b);

// /**
//  * Check if a set contains another one.
//  *
//  * @param a a set
//  * @param b a set
//  * @return true if a contains b
//  */
// bool operator>(const Set & a, const Set & b);

// /**
//  * Union of two sets (Logical OR)
//  *
//  * @param a a set
//  * @param b a set
//  * @return a union b.
//  */
// Set operator|(const Set & a, const Set & b);

// /**
//  * Difference between two sets
//  *
//  * @param a a set
//  * @param b a set
//  * @return a minus b (elements of a that are not in b)
//  */
// Set operator-(const Set & a, const Set & b);

// /**
//  * Symmetric difference between two sets (XOR). Elements that
//  * are in any of the two sets, but not in both of them.
//  *
//  * @param a a set
//  * @param b a set
//  * @return (a minus b) union (b minus a)
//  */
// Set operator^(const Set & a, const Set & b);

// /**
//  * Intersection between two sets (Logical AND)
//  *
//  * @param a a set
//  * @param b a set
//  * @return intersection between a and b
//  */
// Set operator&(const Set & a, const Set & b);

template <typename T>
Set<T>::Node::Node(T v, Node * n){
    value = v;
    next = n;
}

template <typename T>
void Set<T>::Node::setNext(Node * n){
    next = n;
}

template <typename T>
typename Set<T>::Node * Set<T>::Node::getNext() const{
    return next;
}

template <typename T>
T Set<T>::Node::getValue() const{
    return value;
}

template<typename T>
Set<T>::Set(){
    list = nullptr;
}

template<typename T>
void Set<T>::insert(T x){
    if(contains(x)){
        perror("element is already in the list");
        exit(EXIT_FAILURE);
    }

    Set<T>::Node * n = new Node(x, nullptr);
    if(list == nullptr){
        list = n;
    }else{
        while(list->getNext() != nullptr){
            list = list->getNext();
        }
        list->setNext(n); 
    }
}

template<typename T>
bool Set<T>::contains( T x) const{
    Set<T>::Node * next = list;
    while(next != nullptr){
        if(next->getValue() == x){
            return true;
        }
        next = next->getNext();
    }
    return false;
}

#endif // Set_H
