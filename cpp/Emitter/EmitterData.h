// Object: EmitterData
// ClassId: 4480
// RuntimeId: 365
// TypeInfo: 0x0000000144E2C040
#include "../Emitter/ProcessorData.h"
#include "../Emitter/EmitterDocument.h"
#include "../Emitter/EmitterGraph.h"

#pragma pack(push, 8)
namespace Emitter {
    class EmitterData : public Emitter::ProcessorData {
        Array<Emitter::EmitterDocument> EmitterAssets; // 0x38
        Array<Emitter::EmitterGraph> EmitterGraphAssets; // 0x40
    }; // 0x48
    static_assert(sizeof(EmitterData) == 0x48);
}
#pragma pack(pop)