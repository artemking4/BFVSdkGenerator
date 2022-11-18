// Object: ClientShockwaveCollisionInfo
// ClassId: 8539
// RuntimeId: 24821
// TypeInfo: 0x0000000144F13430
#include "../Physics/ShockwaveCollisionInfo.h"

namespace Physics {
    class ClientShockwaveCollisionInfo : public Physics::ShockwaveCollisionInfo {
        char pad_0xC0[0x10];
    }; // 0xD0
    static_assert(sizeof(ClientShockwaveCollisionInfo) == 0xD0);
}