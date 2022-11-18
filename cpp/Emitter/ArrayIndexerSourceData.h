// Object: ArrayIndexerSourceData
// ClassId: 4477
// RuntimeId: 47449
// TypeInfo: 0x0000000144E2AE40
#include "../Emitter/ProcessorData.h"
#include "../EffectBase/EffectParameter.h"
#include "../Emitter/ArrayIndexerSourceIndexSelection.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Emitter {
    class ArrayIndexerSourceData : public Emitter::ProcessorData {
        EffectBase::EffectParameter IndexStorageParam; // 0x38
        EffectBase::EffectParameter SpawnRateStorageParam; // 0x40
        Emitter::ArrayIndexerSourceIndexSelection IndexSelectionMethod; // 0x48
        Uint32 MaxArrayIndex; // 0x4C
    }; // 0x50
    static_assert(sizeof(ArrayIndexerSourceData) == 0x50);
}
#pragma pack(pop)