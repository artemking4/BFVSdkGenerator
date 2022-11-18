// Object: DestructionManager
// ClassId: 8368
// RuntimeId: 59932
// TypeInfo: 0x0000000144F14040
#include "../Physics/IglooSubsystem.h"

#pragma pack(push, 8)
namespace Physics {
    class DestructionManager : public Physics::IglooSubsystem {
        char pad_0x18[0x28];
    }; // 0x40
    static_assert(sizeof(DestructionManager) == 0x40);
}
#pragma pack(pop)