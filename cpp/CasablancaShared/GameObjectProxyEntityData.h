// Object: GameObjectProxyEntityData
// ClassId: 2778
// RuntimeId: 50969
// TypeInfo: 0x0000000144D093B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameObjectProxyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString TargetObjectType; // 0x28
    }; // 0x30
    static_assert(sizeof(GameObjectProxyEntityData) == 0x30);
}
#pragma pack(pop)