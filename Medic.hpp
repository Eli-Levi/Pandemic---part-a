#include "Player.hpp"

namespace pandemic
{
    class Medic : public Player
    {
        public:
        Medic(Board board, City start): Player(board, start){};
        virtual void treat(City city_name);
    };
};