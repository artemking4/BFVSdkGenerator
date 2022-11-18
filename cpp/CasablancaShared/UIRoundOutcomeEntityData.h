// Object: UIRoundOutcomeEntityData
// ClassId: 3753
// RuntimeId: 12242
// TypeInfo: 0x0000000144D20FF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIRoundOutcomeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 WinningTeam; // 0x24
    }; // 0x28
    static_assert(sizeof(UIRoundOutcomeEntityData) == 0x28);
}
#pragma pack(pop)