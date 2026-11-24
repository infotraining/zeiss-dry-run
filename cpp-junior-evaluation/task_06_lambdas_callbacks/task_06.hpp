#pragma once
#include <functional>
#include <vector>

std::vector<int> filter_above_threshold(const std::vector<int>& data, int threshold);

class EventDispatcher {
public:
    void subscribe(std::function<void(int)> callback);
    void emit(int eventCode) const;
};
