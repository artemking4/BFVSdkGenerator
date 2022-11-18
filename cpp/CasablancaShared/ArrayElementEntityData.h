// Object: ArrayElementEntityData
// ClassId: 2064
// RuntimeId: 18839
// TypeInfo: 0x0000000144D4B370
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArrayElementEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer Array; // 0x28
        Int32 ArrayIndex; // 0x30
        char pad_0x34[0x4];
        CString TypeName; // 0x38
        Uint32 TypeNameHash; // 0x40
        char pad_0x44[0x4];
        CString EditorPropertyType; // 0x48
    }; // 0x50
    static_assert(sizeof(ArrayElementEntityData) == 0x50);
}
#pragma pack(pop)