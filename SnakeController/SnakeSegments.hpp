#pragma once
#include "SnakePosition.hpp"
#include <list>

#include "SnakeInterface.hpp"

namespace Snake
{

class Segments
{
    
public:
    Segments(Direction direction);

    void addSegment(int x, int y);
    bool isCollision(Position position) const;
    void addHead(Position& position);
    Position nextHead() const;
    Position removeTail();
    void updateDirection(Direction newDirection);
private:
    Direction m_headDirection;
    std::list<Position> m_segments;
};

} // namespace Snake