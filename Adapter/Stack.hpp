#ifndef STACK_HPP
#define STACK_HPP

class Stack {
    public:
        Stack() = default;
        virtual ~Stack() = default;
    public:
        virtual void push(int elen) = 0;
        virtual void pop() = 0;
        virtual int top() = 0;
        virtual int size() = 0;
};

#endif // STACK_HPP