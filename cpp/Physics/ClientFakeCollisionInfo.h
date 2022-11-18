// Object: ClientFakeCollisionInfo
// ClassId: 8317
// RuntimeId: 20277
// TypeInfo: 0x0000000144F135B0
#include "../Physics/FakeCollisionInfo.h"

namespace Physics {
    class ClientFakeCollisionInfo : public Physics::FakeCollisionInfo {
        char pad_0xD0[0x10];
    }; // 0xE0
    static_assert(sizeof(ClientFakeCollisionInfo) == 0xE0);
}