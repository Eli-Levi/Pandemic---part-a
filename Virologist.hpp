#include "Player.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
        virtual void treat(City city_name);
    };
};