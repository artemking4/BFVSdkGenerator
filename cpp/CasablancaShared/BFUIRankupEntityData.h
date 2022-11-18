// Object: BFUIRankupEntityData
// ClassId: 2368
// RuntimeId: 18416
// TypeInfo: 0x0000000144D22470
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRankupEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIRankupEntityData) == 0x28);
}
#pragma pack(pop)