// Object: PLMStoreGameStateData
// ClassId: 2929
// RuntimeId: 43164
// TypeInfo: 0x0000000144D21AF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PLMGameState.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PLMStoreGameStateData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PLMGameState State; // 0x24
    }; // 0x28
    static_assert(sizeof(PLMStoreGameStateData) == 0x28);
}
#pragma pack(pop)