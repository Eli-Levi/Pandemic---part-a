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
        std::array<bool,WHAT_CITIES> research_station;
        // tree or array that stores info.
    
    public:
        int& operator[](City city_name);
        friend std::ostream &operator<<(std::ostream& os, const Board& map_state);
        bool is_clean();
        void remove_cures();
    };
};