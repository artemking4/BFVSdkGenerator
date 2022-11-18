// Object: SoundEffectEntityData
// ClassId: 3283
// RuntimeId: 45614
// TypeInfo: 0x0000000144E1E1C0
#include "../Entity/ChildEffectEntityData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Audio {
    class SoundEffectEntityData : public Entity::ChildEffectEntityData {
        Audio::SoundAsset Sound; // 0xA0
        Boolean UseDefaultStopEvent; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(SoundEffectEntityData) == 0xB0);
}
#pragma pack(pop)