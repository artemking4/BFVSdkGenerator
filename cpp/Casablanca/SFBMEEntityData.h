// Object: SFBMEEntityData
// ClassId: 3138
// RuntimeId: 26894
// TypeInfo: 0x0000000144C31770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SFBMEEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString In; // 0x28
        Boolean Altc; // 0x30
        Boolean Altp; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(SFBMEEntityData) == 0x38);
}
#pragma pack(pop)