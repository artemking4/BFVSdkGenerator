// Object: ProcessorData
// ClassId: 4475
// RuntimeId: 64142
// TypeInfo: 0x0000000144E2A840
#include "../Core/DataContainer.h"
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/ProcessorData.h"
#include "../Emitter/EmittableField.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace Emitter {
    class ProcessorData : public Core::DataContainer {
        Emitter::EvaluatorData Pre; // 0x18
        Emitter::ProcessorData NextProcessor; // 0x20
        Emitter::EmittableField EvaluatorInput; // 0x28
        char pad_0x2C[0x4];
        EffectBase::EffectParameter EvaluatorInputParam; // 0x30
    }; // 0x38
    static_assert(sizeof(ProcessorData) == 0x38);
}
#pragma pack(pop)