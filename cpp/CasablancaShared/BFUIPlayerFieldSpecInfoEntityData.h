// Object: BFUIPlayerFieldSpecInfoEntityData
// ClassId: 2335
// RuntimeId: 58749
// TypeInfo: 0x0000000144D86AA0
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerFieldSpecInfoEntityData : public Entity::EntityData {
        Array<GameShared::UnlockAssetBase> AllFieldSpecUnlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIPlayerFieldSpecInfoEntityData) == 0x28);
}
#pragma pack(pop)