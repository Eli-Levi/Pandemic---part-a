#include "Player.hpp"

namespace pandemic
{
    class Dispatcher : public Player
    {
        public:
        Dispatcher(Board board, City start): Player(board, start){};
        Player &fly_direct(City city_name);
    };
};