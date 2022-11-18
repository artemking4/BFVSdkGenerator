// Object: BFUIEquipBodyEntityData
// ClassId: 2185
// RuntimeId: 25061
// TypeInfo: 0x0000000144D83320
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObjectList.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipBodyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUISoldierInstanceObjectList Soldiers; // 0x30
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x38
        Boolean SaveAutomatically; // 0x40
        Boolean SaveOnDeinit; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUIEquipBodyEntityData) == 0x48);
}
#pragma pack(pop)