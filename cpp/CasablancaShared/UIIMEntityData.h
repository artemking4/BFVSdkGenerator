// Object: UIIMEntityData
// ClassId: 3717
// RuntimeId: 10473
// TypeInfo: 0x0000000144D20AF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIIMEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean InPlayerSpawnEnabled; // 0x24
        Boolean InSupplyCrateActive; // 0x25
        Boolean InSuppressLoadingIcon; // 0x26
        Boolean InSuppressSavingIcon; // 0x27
    }; // 0x28
    static_assert(sizeof(UIIMEntityData) == 0x28);
}
#pragma pack(pop)