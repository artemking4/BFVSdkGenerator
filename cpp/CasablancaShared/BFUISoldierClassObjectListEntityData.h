// Object: BFUISoldierClassObjectListEntityData
// ClassId: 2391
// RuntimeId: 61798
// TypeInfo: 0x0000000144D85420
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierClassObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUISoldierClassStruct> StaticSoldierClassList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISoldierClassObjectListEntityData) == 0x28);
}
#pragma pack(pop)