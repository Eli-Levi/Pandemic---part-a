#include "Player.hpp"

namespace pandemic
{
    class Researcher : public Player
    {
        public:
        Researcher(Board board, City start): Player(board, start){};
        virtual void discover_cure(Color color_name);
    };
};