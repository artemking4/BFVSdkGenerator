// Object: BFLoadoutEntityData
// ClassId: 2101
// RuntimeId: 3453
// TypeInfo: 0x0000000144D4B2F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 MinimumAmmo; // 0x24
    }; // 0x28
    static_assert(sizeof(BFLoadoutEntityData) == 0x28);
}
#pragma pack(pop)