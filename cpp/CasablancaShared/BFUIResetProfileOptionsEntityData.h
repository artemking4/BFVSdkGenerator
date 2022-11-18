// Object: BFUIResetProfileOptionsEntityData
// ClassId: 2370
// RuntimeId: 15849
// TypeInfo: 0x0000000144D877A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIResetProfileOptionsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIResetProfileOptionsEntityData) == 0x28);
}
#pragma pack(pop)