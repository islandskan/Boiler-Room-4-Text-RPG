#include "WorldMap.h"
#include "Vector2/Vector2.h"
#include <array>

Tile WorldMap::getTile(int x, int y) const noexcept
{
    return m_tiles[x][y];
}

std::array<std::array<Tile&, 5>, 5> WorldMap::getTilesAroundPlayer(const Player &player)
{
    std::array<std::array<Tile&, 5>, 5> temp;

    Vector2 position = player.getPosition();

    for (int x = -2; x < 3; x++)
    {
        if (position.x + x < 0) continue;
        for (int y = -2; y < 3; y++)
        {
            if (position.y + y < 0) continue;
            temp[x + 2][y + 2] = getTile(position.x + x, position.y + y);
        }
    }
}
