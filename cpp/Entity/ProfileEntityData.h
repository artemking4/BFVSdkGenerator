// Object: ProfileEntityData
// ClassId: 3046
// RuntimeId: 53098
// TypeInfo: 0x0000000144EE3FD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class ProfileEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString ProfileName; // 0x28
    }; // 0x30
    static_assert(sizeof(ProfileEntityData) == 0x30);
}
#pragma pack(pop)