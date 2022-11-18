// Object: BFUIIconTextureSourceEntityData
// ClassId: 2284
// RuntimeId: 54889
// TypeInfo: 0x0000000144D20B70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIIconMode.h"
#include "../CasablancaShared/UIIconState.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIIconTextureSourceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::UIIconMode IconMode; // 0x24
        CasablancaShared::UIIconState IconState; // 0x28
        char pad_0x2C[0x4];
        CString IconName; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIIconTextureSourceEntityData) == 0x38);
}
#pragma pack(pop)