// Object: VehicleSpawnStateEntityData
// ClassId: 3879
// RuntimeId: 36565
// TypeInfo: 0x0000000144E8D1E0
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleSpawnStateEntityData : public Entity::EntityData {
        Float32 StartupDelayModifier; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 InitialVelocity; // 0x30
        Float32 InitialThrottle; // 0x40
        Uint32 EngineIndex; // 0x44
        Float32 InitialRpmModifier; // 0x48
        Float32 HeightOffset; // 0x4C
        Float32 Radius; // 0x50
        char pad_0x54[0xC];
    }; // 0x60
    static_assert(sizeof(VehicleSpawnStateEntityData) == 0x60);
}
#pragma pack(pop)