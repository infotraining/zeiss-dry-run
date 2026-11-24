#pragma once
#include <string>
#include <unordered_map>
#include <vector>

void remove_even_numbers(std::vector<int>& vec);
std::unordered_map<std::string, int> count_word_frequencies(const std::vector<std::string>& words);

void move_value_range_to(std::vector<int>& source, std::vector<int>& destination, int value_from, int value_to);