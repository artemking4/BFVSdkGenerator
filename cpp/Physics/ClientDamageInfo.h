// Object: ClientDamageInfo
// ClassId: 73
// RuntimeId: 54706
// TypeInfo: 0x0000000144F137B0
#include "../Physics/DamageInfo.h"

namespace Physics {
    class ClientDamageInfo : public Physics::DamageInfo {
        char pad_0xD0[0x10];
    }; // 0xE0
    static_assert(sizeof(ClientDamageInfo) == 0xE0);
}