// Object: BFUIFactionObjectListEntityData
// ClassId: 2193
// RuntimeId: 11030
// TypeInfo: 0x0000000144D85520
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIFactionStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFactionObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUIFactionStruct> StaticFactionList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIFactionObjectListEntityData) == 0x28);
}
#pragma pack(pop)