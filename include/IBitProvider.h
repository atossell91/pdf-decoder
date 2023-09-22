#pragma once

#include <cstdint>

namespace AntSpace {
    class IBitProvider {
    public:
        uint8_t& operator[](uint32_t);
    };
}
