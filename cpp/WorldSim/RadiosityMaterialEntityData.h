// Object: RadiosityMaterialEntityData
// ClassId: 3087
// RuntimeId: 34613
// TypeInfo: 0x0000000144EC2DC0
#include "../Entity/EntityData.h"
#include "../Global/Guid.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RadiosityMaterialEntityData : public Entity::EntityData {
        Guid MaterialGuid; // 0x20
        Entity::ObjectBlueprint Blueprint; // 0x30
        char pad_0x38[0x8];
        Core::Vec3 Color; // 0x40
        Float32 EmissiveIntensity; // 0x50
        Float32 Opacity; // 0x54
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(RadiosityMaterialEntityData) == 0x60);
}
#pragma pack(pop)