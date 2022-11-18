// Object: BFServerFakeCollisionInfo
// ClassId: 8320
// RuntimeId: 31836
// TypeInfo: 0x0000000144C5CD30
#include "../Physics/ServerFakeCollisionInfo.h"

namespace Casablanca {
    class BFServerFakeCollisionInfo : public Physics::ServerFakeCollisionInfo {
        char pad_0xE0[0x10];
    }; // 0xF0
    static_assert(sizeof(BFServerFakeCollisionInfo) == 0xF0);
}