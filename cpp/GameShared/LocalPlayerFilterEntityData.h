// Object: LocalPlayerFilterEntityData
// ClassId: 2840
// RuntimeId: 32307
// TypeInfo: 0x0000000144E76840
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class LocalPlayerFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean ForwardToLocalSpectators; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(LocalPlayerFilterEntityData) == 0x28);
}
#pragma pack(pop)