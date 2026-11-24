#pragma once

#include <string>
#include <vector>

struct ScoredItem
{
    int id{};
    int score{};
    std::string name;
};

std::vector<std::string> build_report(const std::vector<ScoredItem>& items, int minimum_score);

const ScoredItem* find_item_by_id(const std::vector<ScoredItem>& items, int id);

std::vector<ScoredItem> get_top_n(const std::vector<ScoredItem>& items, std::size_t n);
