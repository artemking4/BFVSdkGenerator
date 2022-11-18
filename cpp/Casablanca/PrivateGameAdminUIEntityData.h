// Object: PrivateGameAdminUIEntityData
// ClassId: 3039
// RuntimeId: 40513
// TypeInfo: 0x0000000144C7F100
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PrivateGameAdminUIEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
    }; // 0x28
    static_assert(sizeof(PrivateGameAdminUIEntityData) == 0x28);
}
#pragma pack(pop)