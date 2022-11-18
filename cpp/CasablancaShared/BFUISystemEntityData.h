// Object: BFUISystemEntityData
// ClassId: 2409
// RuntimeId: 8190
// TypeInfo: 0x0000000144D21170
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISystemEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean PostProcessActivated; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(BFUISystemEntityData) == 0x28);
}
#pragma pack(pop)