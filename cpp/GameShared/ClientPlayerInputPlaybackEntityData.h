// Object: ClientPlayerInputPlaybackEntityData
// ClassId: 2496
// RuntimeId: 48539
// TypeInfo: 0x0000000144E8F1E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class ClientPlayerInputPlaybackEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString FileName; // 0x28
        CString TestName; // 0x30
    }; // 0x38
    static_assert(sizeof(ClientPlayerInputPlaybackEntityData) == 0x38);
}
#pragma pack(pop)