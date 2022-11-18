// Object: ServerShockwaveCollisionInfo
// ClassId: 8540
// RuntimeId: 45521
// TypeInfo: 0x0000000144F133B0
#include "../Physics/ShockwaveCollisionInfo.h"

namespace Physics {
    class ServerShockwaveCollisionInfo : public Physics::ShockwaveCollisionInfo {
        char pad_0xC0[0x10];
    }; // 0xD0
    static_assert(sizeof(ServerShockwaveCollisionInfo) == 0xD0);
}