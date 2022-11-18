// Object: LookAtEntityData
// ClassId: 3408
// RuntimeId: 61996
// TypeInfo: 0x0000000144D29BA0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LookAtEntityData : public Entity::SpatialEntityData {
        Boolean RunOnce; // 0x60
        Boolean UseStaticDirection; // 0x61
        Boolean Enabled; // 0x62
        char pad_0x63[0xD];
    }; // 0x70
    static_assert(sizeof(LookAtEntityData) == 0x70);
}
#pragma pack(pop)