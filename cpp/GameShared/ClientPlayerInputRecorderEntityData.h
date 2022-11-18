// Object: ClientPlayerInputRecorderEntityData
// ClassId: 2498
// RuntimeId: 1255
// TypeInfo: 0x0000000144E8F260
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class ClientPlayerInputRecorderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString FileNameBase; // 0x28
        CString TestName; // 0x30
    }; // 0x38
    static_assert(sizeof(ClientPlayerInputRecorderEntityData) == 0x38);
}
#pragma pack(pop)