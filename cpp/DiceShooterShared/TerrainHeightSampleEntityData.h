// Object: TerrainHeightSampleEntityData
// ClassId: 3566
// RuntimeId: 49072
// TypeInfo: 0x0000000144DF95C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TerrainHeightSampleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 BasePosition; // 0x30
        Boolean IncludeWater; // 0x40
        Boolean OutputHeightAbove; // 0x41
        char pad_0x42[0xE];
    }; // 0x50
    static_assert(sizeof(TerrainHeightSampleEntityData) == 0x50);
}
#pragma pack(pop)