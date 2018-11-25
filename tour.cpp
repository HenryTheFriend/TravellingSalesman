//
// Created by Daniel Shin on 2018-11-12.
//

#include "tour.hpp"

using namespace std;

/*
 * tour constructor
 * @returns tour: newly created tour
 */
tour::tour() : fitness(0.0) {
    city temp{'a', 0, 0};
    for (int i = 0; i < CITIES_IN_TOUR; ++i) {
        cities.push_back(temp);
    }
}

/*
 * assignment operator
 * @params tour t : a tour to be assigned from
 * @returns returns tour& : *this (tour)
 */
tour &tour::operator=(tour t) {
    swap(cities, t.cities);
    swap(fitness, t.fitness);
    return *this;
}
