// Object: BFUIKeybindingsDataProviderEntityData
// ClassId: 2287
// RuntimeId: 23547
// TypeInfo: 0x0000000144D87920
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKeybindingsDataProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString KeybindingType; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIKeybindingsDataProviderEntityData) == 0x30);
}
#pragma pack(pop)