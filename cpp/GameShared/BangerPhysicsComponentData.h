// Object: BangerPhysicsComponentData
// ClassId: 1947
// RuntimeId: 45134
// TypeInfo: 0x0000000144E84040
#include "../GameplaySim/GamePhysicsComponentData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class BangerPhysicsComponentData : public GameplaySim::GamePhysicsComponentData {
        Core::Vec3 ImpulseInput; // 0xB0
    }; // 0xC0
    static_assert(sizeof(BangerPhysicsComponentData) == 0xC0);
}
#pragma pack(pop)