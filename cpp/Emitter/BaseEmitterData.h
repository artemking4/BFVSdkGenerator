// Object: BaseEmitterData
// ClassId: 4478
// RuntimeId: 29542
// TypeInfo: 0x0000000144E2CBC0
#include "../Emitter/ProcessorData.h"
#include "../Emitter/EmitterDocument.h"

#pragma pack(push, 8)
namespace Emitter {
    class BaseEmitterData : public Emitter::ProcessorData {
        Emitter::EmitterDocument EmitterAsset; // 0x38
    }; // 0x40
    static_assert(sizeof(BaseEmitterData) == 0x40);
}
#pragma pack(pop)