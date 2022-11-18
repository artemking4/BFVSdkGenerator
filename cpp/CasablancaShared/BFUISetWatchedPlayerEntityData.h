// Object: BFUISetWatchedPlayerEntityData
// ClassId: 2379
// RuntimeId: 44839
// TypeInfo: 0x0000000144D86920
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISetWatchedPlayerEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean IsActive; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUISetWatchedPlayerEntityData) == 0x30);
}
#pragma pack(pop)