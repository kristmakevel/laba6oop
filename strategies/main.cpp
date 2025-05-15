#include <iostream>
#include <vector>

#include "bubble_sort.hpp"
#include "quick_sort.hpp"
#include "sorter.hpp"
#include "sorting.hpp"
#include "std_sort.hpp"

void couting(std::vector<int>& data) {
    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n\n";
}

int main() {
    std::vector<int> example = { 10, 9, 8, 7, 6, 1, 2, 3, 4, 5, 100, 999 };
    BubbleSortStrategy* bubble = new BubbleSortStrategy();
    std::vector<int> example_bubble = example;
    QuickSortStrategy* quick = new QuickSortStrategy();
    std::vector<int> example_quick = example;
    StdSortStrategy* std = new StdSortStrategy();
    std::vector<int> example_std = example;

    Sorter* sorter = new Sorter(bubble);

    std::cout << "before any sorting: ";
    couting(example);

    std::cout << "bubble sorting: ";
    sorter->SortData(example_bubble);
    couting(example_bubble);

    std::cout << "quick sorting: ";
    sorter->SetNewStrategy(quick);
    sorter->SortData(example_quick);
    couting(example_quick);

    std::cout << "std sorting: ";
    sorter->SetNewStrategy(std);
    sorter->SortData(example_std);
    couting(example_std);

    delete bubble;
    delete quick;
    delete std;
    delete sorter;
    return 0;
}