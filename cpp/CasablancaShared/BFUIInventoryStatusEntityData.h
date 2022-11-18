// Object: BFUIInventoryStatusEntityData
// ClassId: 2286
// RuntimeId: 50630
// TypeInfo: 0x0000000144D85BA0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIInventoryStatusEntityData : public Entity::EntityData {
        CString UIObjectType; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIInventoryStatusEntityData) == 0x28);
}
#pragma pack(pop)