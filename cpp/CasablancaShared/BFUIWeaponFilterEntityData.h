// Object: BFUIWeaponFilterEntityData
// ClassId: 2198
// RuntimeId: 58570
// TypeInfo: 0x0000000144D81720
#include "../CasablancaShared/BFUIClassFilterEntityBaseData.h"
#include "../CasablancaShared/BFUIWeaponClassObject.h"
#include "../CasablancaShared/BFUIWeaponInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponFilterEntityData : public CasablancaShared::BFUIClassFilterEntityBaseData {
        CasablancaShared::BFUIWeaponClassObject IncludeWeaponClass; // 0x30
        CasablancaShared::BFUIWeaponClassObject ExcludeWeaponClass; // 0x38
        CasablancaShared::BFUIWeaponInstanceObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUIWeaponFilterEntityData) == 0x48);
}
#pragma pack(pop)