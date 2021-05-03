#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"

using namespace std;
namespace pandemic
{
    Player& Player::drive(City city_name){ return *this;}
    Player& Player::fly_direct(City city_name) {return *this;}
    Player&  Player::fly_charter(City city_name){return *this;}
    Player&  Player::fly_shuttle(City city_name){return *this;}
    void Player::build(){}
    void Player::discover_cure(Color color_name){}
    void Player::treat(City city_name){}
    std::string Player::role() const{ return "to be done. dun dun DUN!!!!";} 
    void Player::take_cards(City city_name){}
}