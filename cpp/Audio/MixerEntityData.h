// Object: MixerEntityData
// ClassId: 2890
// RuntimeId: 47507
// TypeInfo: 0x0000000144E1DCC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Audio/MixerAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerEntityData : public Entity::EntityData {
        Audio::MixerAsset Mixer; // 0x20
        Boolean ActivateOnCreation; // 0x28
        Boolean AccumulatedInputs; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(MixerEntityData) == 0x30);
}
#pragma pack(pop)