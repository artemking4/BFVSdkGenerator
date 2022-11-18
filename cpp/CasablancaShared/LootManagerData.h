// Object: LootManagerData
// ClassId: 2873
// RuntimeId: 36992
// TypeInfo: 0x0000000144D02320
#include "../Entity/EntityData.h"
#include "../CasablancaShared/LootBucket.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../GameShared/TeamId.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootManagerData : public Entity::EntityData {
        CasablancaShared::LootBucket LootList; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 InitialPhysicsVelocity; // 0x30
        Core::Vec3 InitialPhysicsAngularVelocity; // 0x40
        Int32 LootSourceType; // 0x50
        GameShared::TeamId TeamId; // 0x54
        Entity::ObjectBlueprint LootGroupBlueprint; // 0x58
        Int32 MaximumItemCount; // 0x60
        Boolean UseDebug; // 0x64
        Boolean ApplyPhysicsOnSpawn; // 0x65
        Boolean UsePickupEntity; // 0x66
        char pad_0x67[0x9];
    }; // 0x70
    static_assert(sizeof(LootManagerData) == 0x70);
}
#pragma pack(pop)