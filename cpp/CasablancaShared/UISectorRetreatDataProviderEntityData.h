// Object: UISectorRetreatDataProviderEntityData
// ClassId: 3760
// RuntimeId: 54580
// TypeInfo: 0x0000000144D203F0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISectorRetreatDataProviderEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UISectorRetreatDataProviderEntityData) == 0x28);
}
#pragma pack(pop)