// Object: InclusionSettingEntityData
// ClassId: 2799
// RuntimeId: 4107
// TypeInfo: 0x0000000144E76540
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class InclusionSettingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Setting; // 0x28
        Array<CString> Settings; // 0x30
    }; // 0x38
    static_assert(sizeof(InclusionSettingEntityData) == 0x38);
}
#pragma pack(pop)