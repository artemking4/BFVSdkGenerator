// Object: EvaluatorData
// ClassId: 1579
// RuntimeId: 20122
// TypeInfo: 0x0000000144E2A8C0
#include "../Core/DataContainer.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace Emitter {
    class EvaluatorData : public Core::DataContainer {
        EffectBase::EffectParameter Parameter; // 0x18
    }; // 0x20
    static_assert(sizeof(EvaluatorData) == 0x20);
}
#pragma pack(pop)