// Object: BFUIWatchedPlayerInfoEntityData
// ClassId: 2423
// RuntimeId: 63699
// TypeInfo: 0x0000000144D869A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWatchedPlayerInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIWatchedPlayerInfoEntityData) == 0x28);
}
#pragma pack(pop)