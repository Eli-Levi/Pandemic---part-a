#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <string>
#include "Board.hpp"

namespace pandemic
{
    class Player
    {
        Board board_copy;
        City current_pos;
        int cards_at_hand;
        // does the player need to have a an array to hold the cards?

    public:
        Player(Board board, City city_start = City::Atlanta): board_copy(board), current_pos(city_start){};
        Player& drive(City city_name);
        virtual Player &fly_direct(City city_name);
        Player &fly_charter(City city_name);
        Player &fly_shuttle(City city_name);
        virtual Player& build();
        virtual Player& discover_cure(Color color_name);
        virtual Player& treat(City city_name);
        virtual std::string role() const;
        Player& take_card(City city_name);
        City& get_pos(){ return current_pos;};
        int& get_num_cards(){return cards_at_hand;};
        bool has_research_station(City city_name){return (board_copy.research_station.at(size_t(city_name))); };
        Board& get_board(){return board_copy;};
    };
};