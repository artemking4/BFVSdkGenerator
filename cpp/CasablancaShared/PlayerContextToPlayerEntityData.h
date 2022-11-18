// Object: PlayerContextToPlayerEntityData
// ClassId: 3016
// RuntimeId: 1514
// TypeInfo: 0x0000000144DA0EE0
#include "../Entity/EntityData.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerContextToPlayerEntityData : public Entity::EntityData {
        DicePersistenceShared::PersistenceContextObject PlayerContext; // 0x20
    }; // 0x28
    static_assert(sizeof(PlayerContextToPlayerEntityData) == 0x28);
}
#pragma pack(pop)