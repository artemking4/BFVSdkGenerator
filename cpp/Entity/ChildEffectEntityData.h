// Object: ChildEffectEntityData
// ClassId: 3277
// RuntimeId: 23975
// TypeInfo: 0x0000000144ED6220
#include "../Entity/SpatialEntityData.h"
#include "../Entity/GameObjectData.h"
#include "../Core/QualityScalableInt.h"
#include "../Core/QualityScalableFloat.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableBool.h"

#pragma pack(push, 16)
namespace Entity {
    class ChildEffectEntityData : public Entity::SpatialEntityData {
        Array<Entity::GameObjectData> Components; // 0x60
        Core::QualityScalableInt MaxActiveInstanceCount; // 0x68
        Core::QualityScalableFloat CullDistance; // 0x7C
        Float32 StartDelay; // 0x90
        Boolean KillWhenDistanceCulled; // 0x94
        Boolean ResetInstanceWhenStarted; // 0x95
        Boolean AttachToSpawnSurface; // 0x96
        Core::QualityScalableBool Enable; // 0x97
        Boolean OverrideDrawOrder; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(ChildEffectEntityData) == 0xA0);
}
#pragma pack(pop)