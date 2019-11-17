#ifndef NRESOURCEMAPS_HH
#define NRESOURCEMAPS_HH


#include "core/basicresources.h"

// Add new resourcemap elements
namespace NewResourceMaps {

const Course::ResourceMap ROCK_BP = {
    {Course::MONEY, 3},
    {Course::FOOD, 0},
    {Course::WOOD, 0},
    {Course::STONE, 5},
    {Course::ORE, 2},
};

const Course::ResourceMap SAND_BP = {
    {Course::MONEY, 1},
    {Course::FOOD, 1},
    {Course::WOOD, 0},
    {Course::STONE, 1},
    {Course::ORE, 2},
};

const Course::ResourceMap WATER_BP = {
    {Course::MONEY, 3},
    {Course::FOOD, 5},
    {Course::WOOD, 0},
    {Course::STONE, 0},
    {Course::ORE, 0},
};


}


#endif // NRESOURCEMAPS_HH