// Object: BFUIGetAvailableBodiesEntityData
// ClassId: 2210
// RuntimeId: 63920
// TypeInfo: 0x0000000144D837A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierKitObject.h"
#include "../CasablancaShared/BFUIBodyObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableBodiesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierKitObject Soldier; // 0x28
        CasablancaShared::BFUIBodyObject Body; // 0x30
        Boolean IncludeUnownedObjects; // 0x38
        Boolean ListUnownedObjectsLast; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUIGetAvailableBodiesEntityData) == 0x40);
}
#pragma pack(pop)