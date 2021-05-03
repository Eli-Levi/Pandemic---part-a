#include "Player.hpp"

namespace pandemic
{
    class GeneSplicer : public Player
    {
        public:
        GeneSplicer(Board board, City start): Player(board, start){};
        void discover_cure(Color color_name){}
    };
};