#include "Board.hpp"
#include <string>
using namespace std;

namespace pandemic
{
    int& Board::operator[](City city_name) { return cities_cubes.at(int(city_name)); }
    ostream &operator<<(ostream &os, const Board &map_state)
    {
        return os;
    }
    bool is_clean(){return false;}
    void remove_cures(){}
};