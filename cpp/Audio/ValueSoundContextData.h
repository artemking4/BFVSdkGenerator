// Object: ValueSoundContextData
// ClassId: 4664
// RuntimeId: 30751
// TypeInfo: 0x0000000144E160C0
#include "../Audio/SoundContextData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueSoundContextData : public Audio::SoundContextData {
        Float32 DefaultValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ValueSoundContextData) == 0x28);
}
#pragma pack(pop)