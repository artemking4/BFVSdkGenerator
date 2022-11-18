// Object: FriendZoneEntityData
// ClassId: 2771
// RuntimeId: 32864
// TypeInfo: 0x0000000144C339F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FriendZoneEntityData : public Entity::EntityData {
        Int32 FriendlyWeight; // 0x20
        Int32 FriendlyWeightCap; // 0x24
        Int32 EnemyWeight; // 0x28
        Int32 CorpsWeight; // 0x2C
        Int32 CorpsTimeout; // 0x30
        Float32 RecentSpawnDuration; // 0x34
        Int32 RecentSpawnWeight; // 0x38
        Int32 TeamOwnedFlagWeight; // 0x3C
        Int32 TeamOwnedFlagContestedWeight; // 0x40
        Int32 EnemyOwnedFlag; // 0x44
        Int32 NeutralFlagWeight; // 0x48
        Boolean Enabled; // 0x4C
        Boolean CountCorpsesForAllTeams; // 0x4D
        Boolean InitialZoneRandomized; // 0x4E
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(FriendZoneEntityData) == 0x50);
}
#pragma pack(pop)