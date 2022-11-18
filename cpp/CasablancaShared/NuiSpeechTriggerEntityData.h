// Object: NuiSpeechTriggerEntityData
// ClassId: 2907
// RuntimeId: 13962
// TypeInfo: 0x0000000144D28A20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/NuiSpeechDirectPhrase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::NuiSpeechDirectPhrase Phrase; // 0x28
        Boolean EnableAtStart; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(NuiSpeechTriggerEntityData) == 0x38);
}
#pragma pack(pop)