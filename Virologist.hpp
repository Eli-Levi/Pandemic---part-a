#include "Player.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
        public:
        Virologist(Board board, City start): Player(board, start){};
        virtual void treat(City city_name);
    };
};