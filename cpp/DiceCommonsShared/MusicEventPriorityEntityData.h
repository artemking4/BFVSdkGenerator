// Object: MusicEventPriorityEntityData
// ClassId: 2899
// RuntimeId: 44713
// TypeInfo: 0x0000000144DB31B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class MusicEventPriorityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> MusicEventNames; // 0x28
    }; // 0x30
    static_assert(sizeof(MusicEventPriorityEntityData) == 0x30);
}
#pragma pack(pop)