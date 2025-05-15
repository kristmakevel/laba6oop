#pragma once
#include "sorting.hpp"
#include <algorithm>


class BubbleSortStrategy : public SortingStrategy {
    void sort(std::vector<int>& data) override {
        for (int i = 0; i < data.size() - 1; i++) {
            for (int j = 0; j < data.size() - i - 1;j++) {
                if (data[j] > data[j + 1]) {
                    std::swap(data[j], data[j + 1]);
                }
            }
        }
    }
};