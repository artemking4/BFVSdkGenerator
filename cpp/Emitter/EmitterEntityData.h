// Object: EmitterEntityData
// ClassId: 3279
// RuntimeId: 944
// TypeInfo: 0x0000000144E2A4C0
#include "../Emitter/EmitterChildEffectEntityData.h"
#include "../Emitter/EmitterAsset.h"
#include "../Global/Uint8.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterEntityData : public Emitter::EmitterChildEffectEntityData {
        Emitter::EmitterAsset Emitter; // 0xF0
        Uint8 DrawOrderSlot; // 0xF8
        Boolean UseDefaultLightProbe; // 0xF9
        Boolean LocalPlayerOnly; // 0xFA
        char pad_0xFB[0x5];
    }; // 0x100
    static_assert(sizeof(EmitterEntityData) == 0x100);
}
#pragma pack(pop)