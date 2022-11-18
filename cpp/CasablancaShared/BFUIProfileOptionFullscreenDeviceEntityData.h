// Object: BFUIProfileOptionFullscreenDeviceEntityData
// ClassId: 2358
// RuntimeId: 17001
// TypeInfo: 0x0000000144D87F20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionFullscreenDeviceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIProfileOptionFullscreenDeviceEntityData) == 0x28);
}
#pragma pack(pop)