// Object: PhysicsManager
// ClassId: 8370
// RuntimeId: 5125
// TypeInfo: 0x0000000144F114E0
#include "../Physics/IglooSubsystem.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsManager : public Physics::IglooSubsystem {
        char pad_0x18[0x1D8];
    }; // 0x1F0
    static_assert(sizeof(PhysicsManager) == 0x1F0);
}
#pragma pack(pop)