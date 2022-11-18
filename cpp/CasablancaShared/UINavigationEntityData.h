// Object: UINavigationEntityData
// ClassId: 3737
// RuntimeId: 53527
// TypeInfo: 0x0000000144D889A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UINavigationEntityEventMapping.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINavigationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::UINavigationEntityEventMapping> EventMappings; // 0x28
    }; // 0x30
    static_assert(sizeof(UINavigationEntityData) == 0x30);
}
#pragma pack(pop)