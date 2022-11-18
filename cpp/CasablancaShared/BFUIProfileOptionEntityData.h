// Object: BFUIProfileOptionEntityData
// ClassId: 2353
// RuntimeId: 63130
// TypeInfo: 0x0000000144D881A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LocalPlayerId.h"
#include "../GameShared/ProfileOptionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Core::LocalPlayerId LocalPlayerId; // 0x24
        GameShared::ProfileOptionData Option; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIProfileOptionEntityData) == 0x30);
}
#pragma pack(pop)