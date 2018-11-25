//
// Created by Daniel Shin on 2018-11-12.
//

#ifndef TRAVELLINGSALESMAN_TOUR_HPP
#define TRAVELLINGSALESMAN_TOUR_HPP

#include <vector>
#include "city.hpp"

using namespace std;

class tour {
public:
    const int CITIES_IN_TOUR = 20;

    vector<city> cities;
    double fitness;

    tour();

    tour &operator=(tour t);
};


#endif //TRAVELLINGSALESMAN_TOUR_HPP

//TODO: cities -> tour -> population; when you create a population, population
// constructor will call the tour constructor and so on to initialize