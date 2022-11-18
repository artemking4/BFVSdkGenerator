// Object: ClientDestructionInfo
// ClassId: 5727
// RuntimeId: 37160
// TypeInfo: 0x0000000144F10C60
#include "../Physics/DestructionInfo.h"

namespace Physics {
    class ClientDestructionInfo : public Physics::DestructionInfo {
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(ClientDestructionInfo) == 0x80);
}