#include "Player.hpp"

namespace pandemic
{
    class Dispatcher : public Player
    {
        Player &fly_direct(City city_name);
    };
};