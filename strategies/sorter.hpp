#pragma once
#include "sorting.hpp"

class Sorter {
public:
    Sorter(SortingStrategy* sort_strateg) :sort_strateg(sort_strateg) {};
    void SortData(std::vector<int>& data) {
        sort_strateg->sort(data);
    }

    void SetStrategy(SortingStrategy* new_sort_strateg) {
        sort_strateg = new_sort_strateg;
    }
private:
    SortingStrategy* new_sort_strateg;
};