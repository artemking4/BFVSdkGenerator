// Object: ServerAwardStartTrackingEntityData
// ClassId: 3157
// RuntimeId: 4200
// TypeInfo: 0x0000000144D9FDE0
#include "../Entity/EntityData.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerAwardStartTrackingEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject TargetContext; // 0x20
        CString AwardKey; // 0x28
        Boolean ForceTrackingEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(ServerAwardStartTrackingEntityData) == 0x38);
}
#pragma pack(pop)