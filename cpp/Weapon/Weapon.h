// Object: Weapon
// ClassId: 8643
// RuntimeId: 15414
// TypeInfo: 0x0000000144F753A0
#include "../GameCommon/Tool.h"

namespace Weapon {
    class Weapon : public GameCommon::Tool {
        char pad_0x18[0x1B8];
    }; // 0x1D0
    static_assert(sizeof(Weapon) == 0x1D0);
}