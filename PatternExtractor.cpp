#include "PatternExtractor.h"

PatternExtractor::PatternExtractor(const std::string& regexPattern)
    : pattern(regexPattern) {}

std::vector<std::string> PatternExtractor::extract(const std::string& text) {
    std::vector<std::string> result;

    auto begin = std::sregex_iterator(
        text.begin(),
        text.end(),
        pattern
    );

    auto end = std::sregex_iterator();

    for (auto it = begin; it != end; ++it) {
        result.push_back(it->str());
    }

    return result;
}
