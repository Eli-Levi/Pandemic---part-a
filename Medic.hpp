#include "Player.hpp"

namespace pandemic
{
    class Medic : public Player
    {
        virtual void treat(City city_name);
    };
};