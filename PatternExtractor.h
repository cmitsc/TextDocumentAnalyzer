#ifndef PATTERN_EXTRACTOR_H
#define PATTERN_EXTRACTOR_H

#include <string>
#include <vector>
#include <regex>

class PatternExtractor {
protected:
    std::regex pattern;

public:
    PatternExtractor(const std::string& regexPattern);

    std::vector<std::string> extract(const std::string& text);
};

#endif
