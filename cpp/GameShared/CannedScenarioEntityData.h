// Object: CannedScenarioEntityData
// ClassId: 2462
// RuntimeId: 46902
// TypeInfo: 0x0000000144E9A910
#include "../Entity/EntityData.h"
#include "../GameShared/CannedAnimationBinding.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class CannedScenarioEntityData : public Entity::EntityData {
        GameShared::CannedAnimationBinding CannedAnimBinding; // 0x20
        Int32 AnimationEntitySpacePriority; // 0xFC
        Boolean AlwaysClearEntitySpaceWhenInScenario; // 0x100
        char pad_0x101[0x7];
    }; // 0x108
    static_assert(sizeof(CannedScenarioEntityData) == 0x108);
}
#pragma pack(pop)