// Object: FloatPhysicsHealthEntityData
// ClassId: 2755
// RuntimeId: 59190
// TypeInfo: 0x0000000144D0A430
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FloatPhysicsHealthEntityData : public Entity::EntityData {
        Float32 DamageAmount; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DamagePosition; // 0x30
        Float32 DamageToNeighbors; // 0x40
        Float32 BoyancyHealth; // 0x44
        Float32 BoyancyZone1; // 0x48
        Float32 BoyancyZone2; // 0x4C
        Float32 BoyancyZone3; // 0x50
        Float32 BoyancyZone4; // 0x54
        Float32 BoyancyZone5; // 0x58
        Float32 BoyancyZone6; // 0x5C
        Float32 BoyancyZone7; // 0x60
        Float32 BoyancyZone8; // 0x64
        Float32 BoyancyZone9; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(FloatPhysicsHealthEntityData) == 0x70);
}
#pragma pack(pop)