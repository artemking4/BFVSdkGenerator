// Object: ServerFakeCollisionInfo
// ClassId: 8319
// RuntimeId: 47718
// TypeInfo: 0x0000000144F13530
#include "../Physics/FakeCollisionInfo.h"

namespace Physics {
    class ServerFakeCollisionInfo : public Physics::FakeCollisionInfo {
        char pad_0xD0[0x10];
    }; // 0xE0
    static_assert(sizeof(ServerFakeCollisionInfo) == 0xE0);
}