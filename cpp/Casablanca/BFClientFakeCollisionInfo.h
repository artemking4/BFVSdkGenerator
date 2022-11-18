// Object: BFClientFakeCollisionInfo
// ClassId: 8318
// RuntimeId: 55597
// TypeInfo: 0x0000000144C5CDB0
#include "../Physics/ClientFakeCollisionInfo.h"

namespace Casablanca {
    class BFClientFakeCollisionInfo : public Physics::ClientFakeCollisionInfo {
        char pad_0xE0[0x10];
    }; // 0xF0
    static_assert(sizeof(BFClientFakeCollisionInfo) == 0xF0);
}