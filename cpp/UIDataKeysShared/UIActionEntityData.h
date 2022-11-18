// Object: UIActionEntityData
// ClassId: 3606
// RuntimeId: 50341
// TypeInfo: 0x0000000144F68DE0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIActionEntityData : public Entity::EntityData {
        Int32 ActionKey; // 0x20
        char pad_0x24[0x4];
        Array<CString> Params; // 0x28
        Core::Asset ActionAsset; // 0x30
        Array<CString> PropertyParams; // 0x38
    }; // 0x40
    static_assert(sizeof(UIActionEntityData) == 0x40);
}
#pragma pack(pop)