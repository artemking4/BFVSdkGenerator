// Object: BFUIProfileOptionOverallGraphicsQualityEntityData
// ClassId: 2360
// RuntimeId: 41196
// TypeInfo: 0x0000000144D87EA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/ProfileOptionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionOverallGraphicsQualityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionData Option; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIProfileOptionOverallGraphicsQualityEntityData) == 0x30);
}
#pragma pack(pop)