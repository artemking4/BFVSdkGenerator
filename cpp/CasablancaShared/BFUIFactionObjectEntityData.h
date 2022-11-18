// Object: BFUIFactionObjectEntityData
// ClassId: 2192
// RuntimeId: 16485
// TypeInfo: 0x0000000144D855A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIFactionStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFactionObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUIFactionStruct StaticFaction; // 0x20
    }; // 0x30
    static_assert(sizeof(BFUIFactionObjectEntityData) == 0x30);
}
#pragma pack(pop)