/*
 * Stack.h
 */

#ifndef STACK_H_
#define STACK_H_

#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include <exception>

using namespace std;

class EmptyException : public exception {};
class OverflowException : public exception {};

class Stack {
private:
	int m_index;
	int m_capacity;
	int *m_values;
public:
	Stack() : m_index(0), m_capacity(10) {
		m_values = new int[m_capacity];
	}

	Stack(int capacity) : m_index(0), m_capacity(capacity) {
		m_values = new int[m_capacity];
	}

	~Stack() {
		delete[] m_values;
	}

	bool isEmpty() {
		return m_index == 0;
	}

	bool isFull() {
		return m_index == m_capacity;
	}

	int getCapacity() {
		return m_capacity;
	}

	int getSize() {
        return m_index;
    }

    void push(int value) {
    	if (isFull()) {
    		throw OverflowException();
    	}
        m_values[m_index++] = value;
    }

    int pop() {
    	if (isEmpty()) {
    		throw EmptyException();
    	}
    	return m_values[--m_index];
    }

    string toString() {
    	ostringstream ss;
    	ss << "[";
    	if (m_index > 0) {
    		ss << m_values[0];
    	}
    	for (int i = 1; i < m_index; i++) {
    		ss << ", ";
    		ss << m_values[i];
    	}
    	ss << "]";
    	return ss.str();
    }

};

#endif /* STACK_H_ */
