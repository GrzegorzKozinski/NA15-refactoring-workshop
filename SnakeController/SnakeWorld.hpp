#pragma once
#include "SnakePosition.hpp"
#include <utility>

namespace Snake
{

class World
{
public:
    World(std::pair<int, int> dimension, Position food);

    void setFoodPosition(Position position);
    Position getFoodPosition() const;

    bool contains(Position position) const;

private:
    Position m_foodPosition;
    std::pair<int, int> m_dimension;
};

} // namespace Snake
