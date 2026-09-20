#include "URLExtractor.h"

URLExtractor::URLExtractor()
    : PatternExtractor(
        R"((https?://|www\.)[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}(/[^\s]*)?)"
      ) {}
