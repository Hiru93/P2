#include "intmod.h"

IntMod::IntMod(int n): val(n%modulo) { };

IntMod::operator int() const { return val; };

void IntMod::set_modulo(int mod) { modulo = mod; }

IntMod IntMod::operator+(const IntMod& m) const {
    return IntMod(val + m.val);
}

IntMod IntMod::operator*(const IntMod& m) const {
    return IntMod(val * m.val);
}

int IntMod::modulo = 1;
