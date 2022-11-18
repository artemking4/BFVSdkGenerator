// Object: UISquadControlEntityData
// ClassId: 3771
// RuntimeId: 33196
// TypeInfo: 0x0000000144D41DD0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISquadObject.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadControlEntityData : public Entity::EntityData {
        CasablancaShared::BFUISquadObject Squad; // 0x20
        CasablancaShared::BFUIPlayerObject Player; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(UISquadControlEntityData) == 0x38);
}
#pragma pack(pop)