#pragma once
#include <vector>
#include "sorting.hpp"

class InsertionSortStrategy : public SortingStrategy {
    void sort(std::vector<int>& data) override {
        for (int i = 1; i < data.size(); i++) {
            int main_thing = data[i];
            int j = i - 1;


            while (j >= 0 && data[j] > main_thing) {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = main_thing;
        }
    }
};