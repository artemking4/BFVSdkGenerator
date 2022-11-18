// Object: ServerDamageInfo
// ClassId: 74
// RuntimeId: 35757
// TypeInfo: 0x0000000144F13830
#include "../Physics/DamageInfo.h"

namespace Physics {
    class ServerDamageInfo : public Physics::DamageInfo {
        char pad_0xD0[0x10];
    }; // 0xE0
    static_assert(sizeof(ServerDamageInfo) == 0xE0);
}