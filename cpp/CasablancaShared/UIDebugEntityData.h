// Object: UIDebugEntityData
// ClassId: 3627
// RuntimeId: 54817
// TypeInfo: 0x0000000144D21070
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDebugEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UniqueName; // 0x28
    }; // 0x30
    static_assert(sizeof(UIDebugEntityData) == 0x30);
}
#pragma pack(pop)