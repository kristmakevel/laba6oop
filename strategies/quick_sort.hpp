#pragma once
#include "sorting.hpp"
#include <algorithm>


class QuickSortStrategy : public SortingStrategy {
    void sort(std::vector<int>& data) override {
        quick_sor(data, 0, data.size() - 1);
    }

    void quick_sor(std::vector<int>& data, int start, int end) {
        if (start < end) {
            int ind = partition(data, start, end);
            quick_sor(data, start, ind - 1);
            quick_sor(data, ind + 1, end);
        }
    }

    int partition(std::vector<int>& data, int start, int end) {
        int main_thing = data[end];
        int i = start - 1;
        for (int j = start; j < end; j++) {
            if (data[j] < main_thing) {
                i++;
                std::swap(data[i], data[j]);
            }
        }
        std::swap(data[end], data[i + 1]);
        return i + 1;
    }
};