// Object: RadiosityMaterialOpacityTriggerEntityData
// ClassId: 3089
// RuntimeId: 58990
// TypeInfo: 0x0000000144EC2CC0
#include "../Entity/EntityData.h"
#include "../Global/Guid.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RadiosityMaterialOpacityTriggerEntityData : public Entity::EntityData {
        Guid MaterialGuid; // 0x20
        Float32 MaterialSrcOpacity; // 0x30
        char pad_0x34[0xC];
        Core::Vec3 MaterialSrcColor; // 0x40
        Float32 OpacityOnTransparency; // 0x50
        Float32 OpacityOnColorMultiplier; // 0x54
        Float32 OpacityOffTransparency; // 0x58
        Float32 OpacityOffColorMultiplier; // 0x5C
    }; // 0x60
    static_assert(sizeof(RadiosityMaterialOpacityTriggerEntityData) == 0x60);
}
#pragma pack(pop)