#include "Player.hpp"

namespace pandemic
{
    class FieldDoctor : public Player
    {
        public:
        FieldDoctor(Board board, City start): Player(board, start){};
        virtual void treat(City city_name);
    };
};