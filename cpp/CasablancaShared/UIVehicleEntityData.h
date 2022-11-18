// Object: UIVehicleEntityData
// ClassId: 3783
// RuntimeId: 44034
// TypeInfo: 0x0000000144D20A70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject OptionalPlayer; // 0x28
        Boolean EnableUpdates; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(UIVehicleEntityData) == 0x38);
}
#pragma pack(pop)