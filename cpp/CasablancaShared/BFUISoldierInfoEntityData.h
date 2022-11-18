// Object: BFUISoldierInfoEntityData
// ClassId: 2392
// RuntimeId: 44049
// TypeInfo: 0x0000000144D439D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierObject Soldier; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUISoldierInfoEntityData) == 0x30);
}
#pragma pack(pop)