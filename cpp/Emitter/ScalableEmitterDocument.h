// Object: ScalableEmitterDocument
// ClassId: 483
// RuntimeId: 25448
// TypeInfo: 0x0000000144E2A6C0
#include "../Emitter/EmitterDocument.h"
#include "../Emitter/EmitterTemplateData.h"

#pragma pack(push, 8)
namespace Emitter {
    class ScalableEmitterDocument : public Emitter::EmitterDocument {
        Emitter::EmitterTemplateData TemplateDataLow; // 0x20
        Emitter::EmitterTemplateData TemplateDataMedium; // 0x28
        Emitter::EmitterTemplateData TemplateDataHigh; // 0x30
        Emitter::EmitterTemplateData TemplateDataUltra; // 0x38
    }; // 0x40
    static_assert(sizeof(ScalableEmitterDocument) == 0x40);
}
#pragma pack(pop)