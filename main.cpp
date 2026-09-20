#include <iostream>
#include "PatternExtractor.h"

int main() {
    PatternExtractor extractor(
        R"([\w\.-]+@[\w\.-]+\.\w+)"
    );

    std::string text =
        "Contact: abc@gmail.com and test@yahoo.com";

    std::vector<std::string> result = extractor.extract(text);

    for (const std::string& s : result) {
        std::cout << s << std::endl;
    }

    return 0;
}
