// Object: BFUIGetSpectatorPlayerTabListEntityData
// ClassId: 2253
// RuntimeId: 32729
// TypeInfo: 0x0000000144D42E50
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSpectatorPlayerTabListEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject CurrentPlayer; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIGetSpectatorPlayerTabListEntityData) == 0x28);
}
#pragma pack(pop)