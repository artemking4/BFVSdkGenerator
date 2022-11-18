// Object: UINewThingEntityData
// ClassId: 3739
// RuntimeId: 1807
// TypeInfo: 0x0000000144D5D960
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UINewThingAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::UINewThingAsset Input; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingEntityData) == 0x30);
}
#pragma pack(pop)