#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <string>
namespace pandemic
{
    class Player
    {
    public:
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