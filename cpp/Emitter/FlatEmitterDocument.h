// Object: FlatEmitterDocument
// ClassId: 482
// RuntimeId: 59194
// TypeInfo: 0x0000000144E2A640
#include "../Emitter/EmitterDocument.h"
#include "../Emitter/EmitterTemplateData.h"

#pragma pack(push, 8)
namespace Emitter {
    class FlatEmitterDocument : public Emitter::EmitterDocument {
        Emitter::EmitterTemplateData TemplateData; // 0x20
    }; // 0x28
    static_assert(sizeof(FlatEmitterDocument) == 0x28);
}
#pragma pack(pop)