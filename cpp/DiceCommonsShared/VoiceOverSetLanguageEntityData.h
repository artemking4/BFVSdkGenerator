// Object: VoiceOverSetLanguageEntityData
// ClassId: 3898
// RuntimeId: 2586
// TypeInfo: 0x0000000144DC1B80
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class VoiceOverSetLanguageEntityData : public Entity::EntityData {
        Int32 LanguageIndex; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VoiceOverSetLanguageEntityData) == 0x28);
}
#pragma pack(pop)