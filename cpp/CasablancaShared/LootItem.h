// Object: LootItem
// ClassId: 369
// RuntimeId: 65406
// TypeInfo: 0x0000000144D02420
#include "../CasablancaShared/LootBase.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootItem : public CasablancaShared::LootBase {
        Entity::PrefabBlueprint LootPickup; // 0x28
        Array<CString> ExcludeInGamemodes; // 0x30
    }; // 0x38
    static_assert(sizeof(LootItem) == 0x38);
}
#pragma pack(pop)