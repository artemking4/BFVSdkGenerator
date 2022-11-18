// Object: UIGlobalScoreboardDataProviderEntityData
// ClassId: 3713
// RuntimeId: 30608
// TypeInfo: 0x0000000144D668F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIGlobalScoreboardView.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGlobalScoreboardDataProviderEntityData : public Entity::EntityData {
        CasablancaShared::UIGlobalScoreboardView ScoreboardView; // 0x20
        Boolean EnableUpdates; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UIGlobalScoreboardDataProviderEntityData) == 0x28);
}
#pragma pack(pop)