// Object: UISvgImageLookupEntityData
// ClassId: 3777
// RuntimeId: 42647
// TypeInfo: 0x0000000144D1FFF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISvgImageLookupEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString SvgImageName; // 0x28
    }; // 0x30
    static_assert(sizeof(UISvgImageLookupEntityData) == 0x30);
}
#pragma pack(pop)