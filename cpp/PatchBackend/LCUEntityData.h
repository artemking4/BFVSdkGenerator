// Object: LCUEntityData
// ClassId: 2824
// RuntimeId: 8953
// TypeInfo: 0x0000000144F08130
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace PatchBackend {
    class LCUEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Automatic; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(LCUEntityData) == 0x28);
}
#pragma pack(pop)