// Object: SoundHdrEntityData
// ClassId: 3233
// RuntimeId: 61411
// TypeInfo: 0x0000000144E1DE40
#include "../Entity/EntityData.h"
#include "../Audio/HdrSetting.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundHdrEntityData : public Entity::EntityData {
        Audio::HdrSetting HdrSetting; // 0x20
        Boolean ApplySettingOnCreation; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SoundHdrEntityData) == 0x30);
}
#pragma pack(pop)