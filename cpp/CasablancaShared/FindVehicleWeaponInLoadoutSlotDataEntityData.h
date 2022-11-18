// Object: FindVehicleWeaponInLoadoutSlotDataEntityData
// ClassId: 2740
// RuntimeId: 25275
// TypeInfo: 0x0000000144D4C2F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUILoadoutData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FindVehicleWeaponInLoadoutSlotDataEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUILoadoutData LoadoutData; // 0x28
        CString CategoryToFind; // 0x30
        Boolean UpdateAutomatically; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(FindVehicleWeaponInLoadoutSlotDataEntityData) == 0x40);
}
#pragma pack(pop)