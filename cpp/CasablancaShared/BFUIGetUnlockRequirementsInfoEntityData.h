// Object: BFUIGetUnlockRequirementsInfoEntityData
// ClassId: 2263
// RuntimeId: 8909
// TypeInfo: 0x0000000144D85C20
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetUnlockRequirementsInfoEntityData : public Entity::EntityData {
        CString UIObjectType; // 0x20
        Boolean ExcludeArmoryOffers; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIGetUnlockRequirementsInfoEntityData) == 0x30);
}
#pragma pack(pop)