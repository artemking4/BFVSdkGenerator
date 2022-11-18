// Object: ServerDestructionInfo
// ClassId: 5728
// RuntimeId: 514
// TypeInfo: 0x0000000144F10CE0
#include "../Physics/DestructionInfo.h"

namespace Physics {
    class ServerDestructionInfo : public Physics::DestructionInfo {
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(ServerDestructionInfo) == 0x80);
}