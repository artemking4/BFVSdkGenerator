// Object: GetBFUISoldierInstanceNameData
// ClassId: 2785
// RuntimeId: 38482
// TypeInfo: 0x0000000144D66470
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GetBFUISoldierInstanceNameData : public Entity::EntityData {
        CasablancaShared::BFUISoldierInstanceObject SoldierInstance; // 0x20
    }; // 0x28
    static_assert(sizeof(GetBFUISoldierInstanceNameData) == 0x28);
}
#pragma pack(pop)