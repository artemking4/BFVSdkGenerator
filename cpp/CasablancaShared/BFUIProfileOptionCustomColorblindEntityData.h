// Object: BFUIProfileOptionCustomColorblindEntityData
// ClassId: 2351
// RuntimeId: 19216
// TypeInfo: 0x0000000144D875A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionCustomColorblindEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString ShowNames; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIProfileOptionCustomColorblindEntityData) == 0x30);
}
#pragma pack(pop)