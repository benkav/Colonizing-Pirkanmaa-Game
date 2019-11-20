#include "gameeventhandler.hh"
#include "vector"
#include "core/playerbase.h"
#include "interfaces/igameeventhandler.h"
#include "iostream"

GameEventHandler::GameEventHandler()
{
}

void GameEventHandler::createPlayers(int numberPlayers)
{
    std::vector<std::string> maximumNames = {"player1", "player2", "player3", "player4"};

    for (int i = 0; i < numberPlayers; i++){
        std::shared_ptr<Course::PlayerBase> newplayer =
                std::make_shared<Course::PlayerBase>(maximumNames[i]);
        players_.push_back(newplayer);
    }
}

void GameEventHandler::printPlayerNames()
{
    for (auto player : players_){
        std::cout << player->getName() << std::endl;
    }
}

bool GameEventHandler::modifyResource(std::shared_ptr<Course::PlayerBase> player, Course::BasicResource resource, int amount)
{

}

bool GameEventHandler::modifyResources(std::shared_ptr<Course::PlayerBase> player, Course::ResourceMap resources)
{

}