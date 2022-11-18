// Object: BFUIGunMasterRanksEntityData
// ClassId: 2280
// RuntimeId: 60015
// TypeInfo: 0x0000000144D9C490
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGunMasterRanksEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIGunMasterRanksEntityData) == 0x28);
}
#pragma pack(pop)