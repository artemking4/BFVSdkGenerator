// Object: SectorRetreatEntityData
// ClassId: 3149
// RuntimeId: 14300
// TypeInfo: 0x0000000144D5C2E0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SectorRetreatEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        Boolean AwardSuccessfulRetreat; // 0x24
        Boolean ExcludeAllowedInSurrounding; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(SectorRetreatEntityData) == 0x28);
}
#pragma pack(pop)