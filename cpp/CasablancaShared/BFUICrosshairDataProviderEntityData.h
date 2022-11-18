// Object: BFUICrosshairDataProviderEntityData
// ClassId: 2177
// RuntimeId: 33283
// TypeInfo: 0x0000000144D43850
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICrosshairDataProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUICrosshairDataProviderEntityData) == 0x28);
}
#pragma pack(pop)