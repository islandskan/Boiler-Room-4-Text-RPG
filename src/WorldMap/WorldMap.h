#ifndef __WORLD_MAP__
#define __WORLD_MAP__

#include "Tile/Tile.h"

#include <array>

class WorldMap
{
public:
    Tile& getTile(int x, int y) const noexcept;
    std::array<std::array<Tile&, 5>, 5> getTilesAroundPlayer(const Player &player);
private:
    std::array<std::array<Tile, 100>, 100> m_tiles[100][100];
}

#endif