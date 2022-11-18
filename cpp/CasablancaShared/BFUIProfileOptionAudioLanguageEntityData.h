// Object: BFUIProfileOptionAudioLanguageEntityData
// ClassId: 2348
// RuntimeId: 62658
// TypeInfo: 0x0000000144D87E20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/ProfileOptionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionAudioLanguageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionData Option; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIProfileOptionAudioLanguageEntityData) == 0x30);
}
#pragma pack(pop)