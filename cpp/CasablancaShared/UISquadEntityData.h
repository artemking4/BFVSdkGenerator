// Object: UISquadEntityData
// ClassId: 3772
// RuntimeId: 60626
// TypeInfo: 0x0000000144D20E70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> SquadShortNames; // 0x28
        Array<CString> SquadNames; // 0x30
    }; // 0x38
    static_assert(sizeof(UISquadEntityData) == 0x38);
}
#pragma pack(pop)