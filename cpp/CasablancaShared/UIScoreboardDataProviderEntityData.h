// Object: UIScoreboardDataProviderEntityData
// ClassId: 3755
// RuntimeId: 6816
// TypeInfo: 0x0000000144D44250
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PlayerSortingCriteria.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScoreboardDataProviderEntityData : public Entity::EntityData {
        CasablancaShared::PlayerSortingCriteria SortingCriteria; // 0x20
        Boolean EnableUpdates; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UIScoreboardDataProviderEntityData) == 0x28);
}
#pragma pack(pop)