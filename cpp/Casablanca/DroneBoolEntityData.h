// Object: DroneBoolEntityData
// ClassId: 2671
// RuntimeId: 3860
// TypeInfo: 0x0000000144C82C40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DroneBoolEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString VariableName; // 0x28
    }; // 0x30
    static_assert(sizeof(DroneBoolEntityData) == 0x30);
}
#pragma pack(pop)