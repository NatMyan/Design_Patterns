#include "MeatDecorator.hpp"

void MeatDecorator::boil() {
    if (meat_)
        meat_->boil();
}