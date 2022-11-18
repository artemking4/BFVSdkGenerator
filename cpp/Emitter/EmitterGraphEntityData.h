// Object: EmitterGraphEntityData
// ClassId: 3280
// RuntimeId: 32378
// TypeInfo: 0x0000000144E2A540
#include "../Emitter/EmitterChildEffectEntityData.h"
#include "../EmitterBase/EmitterGraphBaseAsset.h"
#include "../Emitter/EmitterExposedInput.h"
#include "../EffectBase/EmitterGraphOverrides.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterGraphEntityData : public Emitter::EmitterChildEffectEntityData {
        EffectBase::EmitterGraphOverrides EmitterGraphOverrides; // 0xF0
        EmitterBase::EmitterGraphBaseAsset EmitterGraph; // 0x180
        Array<Emitter::EmitterExposedInput> EmitterGraphParams; // 0x188
    }; // 0x190
    static_assert(sizeof(EmitterGraphEntityData) == 0x190);
}
#pragma pack(pop)