// Object: ExitReasonEntityData
// ClassId: 2728
// RuntimeId: 3875
// TypeInfo: 0x0000000144D213F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ExitReasonEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 ExitReason; // 0x24
    }; // 0x28
    static_assert(sizeof(ExitReasonEntityData) == 0x28);
}
#pragma pack(pop)