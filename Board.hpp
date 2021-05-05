#pragma once
#include <array>
#include "City.hpp"
#include <ostream>

const int NUM_DISEASES = 4;
const int WHAT_CITIES = 48;
namespace pandemic
{
    class Board
    {
        uint NUM_ON_DISEASE_CUBES;
        std::array<bool, NUM_DISEASES> is_cured;
        std::array<int, WHAT_CITIES> cities_cubes;
        std::array<bool, WHAT_CITIES> research_station;
        // tree or array that stores info.

    public:
        Board() : NUM_ON_DISEASE_CUBES(0)
        {
            for (size_t i = 0; i < WHAT_CITIES; i++)
            {
                if (i < 4)
                {
                    is_cured.at(i) = false;
                }
                research_station.at(i) = false;
                cities_cubes.at(i) = 0;
            }
        };
        int& operator[](City city_name) const;
        int operator[](City city_name);
        friend std::ostream &operator<<(std::ostream &os, const Board &map_state);
        bool is_clean();
        void remove_cures();
        std::array<bool,4> get_is_cured(){return is_cured;};
        friend class Player;
    };
};