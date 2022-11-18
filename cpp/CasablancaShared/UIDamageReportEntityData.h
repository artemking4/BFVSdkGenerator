// Object: UIDamageReportEntityData
// ClassId: 3625
// RuntimeId: 4613
// TypeInfo: 0x0000000144D220F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDamageReportEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIDamageReportEntityData) == 0x28);
}
#pragma pack(pop)