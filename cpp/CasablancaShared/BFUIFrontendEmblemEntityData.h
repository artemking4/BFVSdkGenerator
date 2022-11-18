// Object: BFUIFrontendEmblemEntityData
// ClassId: 2207
// RuntimeId: 35557
// TypeInfo: 0x0000000144D81AA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFrontendEmblemEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Url; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIFrontendEmblemEntityData) == 0x30);
}
#pragma pack(pop)