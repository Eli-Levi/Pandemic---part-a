#include "Player.hpp"

namespace pandemic
{
    class FieldDoctor : public Player
    {
        virtual void treat(City city_name);
    };
};