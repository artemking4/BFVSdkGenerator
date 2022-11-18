// Object: RadiosityMaterialInstanceEntityData
// ClassId: 3088
// RuntimeId: 35911
// TypeInfo: 0x0000000144EC2D40
#include "../Entity/EntityData.h"
#include "../Global/Guid.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RadiosityMaterialInstanceEntityData : public Entity::EntityData {
        Guid MaterialGuid; // 0x20
        Float32 EmissiveIntensity; // 0x30
        char pad_0x34[0xC];
        Core::Vec3 Color; // 0x40
        Float32 Opacity; // 0x50
        char pad_0x54[0xC];
    }; // 0x60
    static_assert(sizeof(RadiosityMaterialInstanceEntityData) == 0x60);
}
#pragma pack(pop)