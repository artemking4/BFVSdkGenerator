// Object: SpottingDistanceScaleEntityData
// ClassId: 3499
// RuntimeId: 39958
// TypeInfo: 0x0000000144C31E70
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SpottingDistanceScaleEntityData : public Entity::EntityData {
        Float32 SpottingScale; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SpottingDistanceScaleEntityData) == 0x28);
}
#pragma pack(pop)