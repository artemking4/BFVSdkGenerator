// Object: UINewThingSpartaEntityData
// ClassId: 3741
// RuntimeId: 10135
// TypeInfo: 0x0000000144D5D860
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSpartaEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> Markers; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSpartaEntityData) == 0x30);
}
#pragma pack(pop)