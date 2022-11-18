// Object: ComponentEntityData
// ClassId: 3287
// RuntimeId: 34520
// TypeInfo: 0x0000000144ED74F0
#include "../Entity/SpatialEntityData.h"
#include "../Entity/GameObjectData.h"
#include "../Core/AxisAlignedBox.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace Entity {
    class ComponentEntityData : public Entity::SpatialEntityData {
        Array<Entity::GameObjectData> Components; // 0x60
        Array<Core::AxisAlignedBox> PartBoundingBoxes; // 0x68
        Uint8 ClientRuntimeComponentCount; // 0x70
        Uint8 ServerRuntimeComponentCount; // 0x71
        Uint8 ClientRuntimeTransformationCount; // 0x72
        Uint8 ServerRuntimeTransformationCount; // 0x73
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(ComponentEntityData) == 0x80);
}
#pragma pack(pop)