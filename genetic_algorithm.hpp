//
// Created by Daniel Shin on 2018-11-12.
//

#ifndef TRAVELLINGSALESMAN_GENETIC_ALGORITHM_HPP
#define TRAVELLINGSALESMAN_GENETIC_ALGORITHM_HPP

#include <random>
#include <iostream>
#include <iomanip>

#include <algorithm>
#include "city.hpp"
#include "tour.hpp"

using namespace std;

class genetic_algorithm {

    int CITIES_IN_TOUR = 20;

    unsigned long POPULATION_SIZE = 30;

    int MAP_BOUNDARY = 1000;

    int ITERATIONS = 1000;

    unsigned long PARENT_POOL_SIZE = 5;

    double MUTATION_RATE = 0.15;

    unsigned long NUMBER_OF_PARENTS = 2;

    int NUMBER_OF_ELITES = 1;

    double SCALER = 10000.0;

    double IMPROVEMENT_FACTOR = 0.1;

    void shuffle_cities(tour &t);

    double get_distance_between_cities(city first, city second);

    int determine_fitness(vector<tour> &p, int size);

    double get_tour_distance(tour &t);

    vector<tour> select_parents(vector<tour> &p);

    tour crossover(vector<tour> &parents);

    bool contains_city(tour &candidate_tour, int length, city &candidate_city);

    void mutate(vector<tour> &p);

    void swap_cities(int first, int second, vector<city> &cities);

    void print_cities(vector<city> &cities);

public:
    genetic_algorithm();
};


#endif //TRAVELLINGSALESMAN_GENETIC_ALGORITHM_HPP
