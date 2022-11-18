// Object: RandomTargetEntityData
// ClassId: 3096
// RuntimeId: 21132
// TypeInfo: 0x0000000144D12300
#include "../Entity/EntityData.h"
#include "../CasablancaShared/RandomTargetMethod.h"
#include "../CasablancaShared/RandomTriggerMethod.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class RandomTargetEntityData : public Entity::EntityData {
        CasablancaShared::RandomTargetMethod SingleGeometryRandomizationMethod; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 SingleGeometryFallbackPosition; // 0x30
        CasablancaShared::RandomTriggerMethod TriggerMethod; // 0x40
        Float32 TriggerInterval; // 0x44
        Uint32 SingleGeometryMaxTries; // 0x48
        Boolean IsEnabled; // 0x4C
        Boolean SingleGeometryAllowPointsUnderWater; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(RandomTargetEntityData) == 0x50);
}
#pragma pack(pop)