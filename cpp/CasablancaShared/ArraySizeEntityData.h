// Object: ArraySizeEntityData
// ClassId: 2065
// RuntimeId: 61258
// TypeInfo: 0x0000000144D4B3F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArraySizeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer ArrayInput; // 0x28
    }; // 0x30
    static_assert(sizeof(ArraySizeEntityData) == 0x30);
}
#pragma pack(pop)