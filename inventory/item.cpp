#include "item.h"

std::string Item::getName() const
{
    return Name; 
}

char Item::getType() const
{
    return Type;
}

bool Item::isEqual(const Item& other) const
{
    return (this->Name == other.Name);
}
