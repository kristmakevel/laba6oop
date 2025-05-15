#pragma once
#include "sorting.hpp"

class Sorter {
public:
    Sorter(SortingStrategy* sorter_s) :sorter_s(sorter_s) {};
    void SortData(std::vector<int>& data) {
        sorter_s->sort(data);
    }

    void SetNewStrategy(SortingStrategy* new_sorter_s) {
        sorter_s = new_sorter_s;
    }
private:
    SortingStrategy* sorter_s;
};