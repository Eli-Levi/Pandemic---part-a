#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <string>
namespace pandemic
{
    class Player
    {
        Board board_copy;
        City current_pos;
        // does the player need to have a an array to hold the cards?

    public:
        Player(Board board, City city_start): board_copy(board), current_pos(city_start){};
        Player &drive(City city_name);
        virtual Player &fly_direct(City city_name);
        Player &fly_charter(City city_name);
        Player &fly_shuttle(City city_name);
        virtual void build();
        virtual void discover_cure(Color color_name);
        virtual void treat(City city_name);
        virtual std::string role() const;
        void take_cards(City city_name);
    };
};