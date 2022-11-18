// Object: DirectionHintEntityData
// ClassId: 3359
// RuntimeId: 48524
// TypeInfo: 0x0000000144D01520
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DirectionHintEntityData : public Entity::SpatialEntityData {
        Boolean IsTargetPosition; // 0x60
        char pad_0x61[0xF];
    }; // 0x70
    static_assert(sizeof(DirectionHintEntityData) == 0x70);
}
#pragma pack(pop)