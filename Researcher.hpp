#include "Player.hpp"

namespace pandemic
{
    class Researcher : public Player
    {
        virtual void discover_cure(Color color_name);
    };
};