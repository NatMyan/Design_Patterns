#ifndef CHAIR_HPP
#define CHAIR_HPP

struct Chair {
    virtual void makeChair() = 0;
    virtual ~Chair() = default;
};

#endif // CHAIR_HPP